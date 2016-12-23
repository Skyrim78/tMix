#include "tmix.h"
#include "ui_tmix.h"

tMix::tMix(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::tMix)
{
    ui->setupUi(this);

    QSettings sett("setting.ini", QSettings::IniFormat);
    resize(sett.value("size").toSize());
    move(sett.value("pos").toPoint());

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("mix.db3");
    db.open();

    fa = new FormA(this);
    om = new operatorsM(this);
    md = new make_document(this);
    da = new data_add(this);
    st = new statA(this);


    TabWidget  *tab = new TabWidget();
    tab->setTabPosition(TabWidget :: West);
    tab->addTab(fa, "Главная");
    tab->addTab(om, "Операторы");
    tab->addTab(da, "Загрузка файлов");
    tab->addTab(md, "Поиск");
    tab->addTab(st, "Статистика");

    setCentralWidget(tab);

    connect(tab, SIGNAL(currentChanged(int)), this, SLOT(change_tab(int)));



}

tMix::~tMix()
{
    QSettings sett("setting.ini", QSettings::IniFormat);
    sett.setValue("size", size());
    sett.setValue("pos", pos());

    if (db.isOpen()){
        db.close();
    }
    delete ui;
}

void tMix::change_tab(int x)
{
    if (x == 1){
        om->load();
    }
    if (x == 2){
        da->load();
    }
    if (x == 3){
        md->load();
    }
    if (x == 4){
        st->load();
    }

}



