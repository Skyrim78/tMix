#-------------------------------------------------
#
# Project created by QtCreator 2016-12-16T15:12:54
#
#-------------------------------------------------

QT       += core gui sql axcontainer

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = tMix_2
TEMPLATE = app


SOURCES += main.cpp\
        tmix.cpp \
    forma.cpp \
    data_add.cpp \
    operators.cpp \
    make_document.cpp

HEADERS  += tmix.h \
    forma.h \
    data_add.h \
    operators.h \
    make_document.h

FORMS    += tmix.ui \
    forma.ui \
    data_add.ui \
    operators.ui \
    make_document.ui
