#-------------------------------------------------
#
# Project created by QtCreator 2016-05-10T22:28:21
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled3
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Game.cpp \
    time.cpp \
    Enemy.cpp \
    form.cpp \
    Enemy2.cpp \
    Score.cpp \
    myrect.cpp

HEADERS  += mainwindow.h \
    Game.h \
    time.h \
    Enemy.h \
    form.h \
    Enemy2.h \
    Score.h \
    myrect.h

FORMS    += mainwindow.ui \
    form.ui

RESOURCES += \
    pics.qrc \
    music.qrc
