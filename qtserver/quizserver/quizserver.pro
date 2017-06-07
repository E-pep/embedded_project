#-------------------------------------------------
#
# Project created by QtCreator 2016-12-30T15:59:57
#
#-------------------------------------------------

QT       += core gui
QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = quizserver
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    vraag.cpp

HEADERS  += mainwindow.h \
    vraag.h

FORMS    += mainwindow.ui



