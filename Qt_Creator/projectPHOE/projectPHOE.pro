#-------------------------------------------------
#
# Project created by QtCreator 2015-03-17T18:50:27
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = projectPHOE
TEMPLATE = app


SOURCES += main.cpp\
        phoe.cpp \
    exammenu.cpp \
    loginsuccess.cpp \
    newlogin.cpp

HEADERS  += phoe.h \
    exammenu.h \
    loginsuccess.h \
    newlogin.h

FORMS    += \
    exammenu.ui \
    loginsuccess.ui \
    phoe.ui \
    newlogin.ui
