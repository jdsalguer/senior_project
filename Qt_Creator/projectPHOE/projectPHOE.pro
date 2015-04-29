#-------------------------------------------------
#
# Project created by QtCreator 2015-03-17T18:50:27
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = projectPHOE
    target.files = projectPHOE
    target.path = /home/root

INSTALLS += target
TEMPLATE = app


SOURCES += main.cpp\
        phoe.cpp \
    exammenu.cpp \
    loginsuccess.cpp \
    newlogin.cpp \
    loginerror.cpp \
    menulogout.cpp \
    consent.cpp \
    newsuccess.cpp \
    fundusdescr.cpp \
    fundusexam.cpp \
    fundusinstruc.cpp \
    oculardescr.cpp \
    ocularinstruc.cpp \
    ocularexam.cpp \
    fielddescr.cpp \
    fieldinstruc.cpp \
    fieldexam.cpp \
    colorexam.cpp \
    colorinstruc.cpp \
    colordescr.cpp \
    acuityexam.cpp \
    acuityinstruc.cpp \
    acuitydescr.cpp \
    keyboard.cpp \
    examcomplete.cpp \
    Camera.cpp

HEADERS  += phoe.h \
    exammenu.h \
    loginsuccess.h \
    newlogin.h \
    loginerror.h \
    menulogout.h \
    consent.h \
    newsuccess.h \
    fundusdescr.h \
    fundusexam.h \
    fundusinstruc.h \
    oculardescr.h \
    ocularinstruc.h \
    ocularexam.h \
    fielddescr.h \
    fieldinstruc.h \
    fieldexam.h \
    colorexam.h \
    colorinstruc.h \
    colordescr.h \
    acuityexam.h \
    acuityinstruc.h \
    acuitydescr.h \
    keyboard.h \
    examcomplete.h \
    Camera.h

FORMS    += \
    exammenu.ui \
    loginsuccess.ui \
    phoe.ui \
    newlogin.ui \
    loginerror.ui \
    menulogout.ui \
    consent.ui \
    newsuccess.ui \
    fundusdescr.ui \
    fundusexam.ui \
    fundusinstruc.ui \
    oculardescr.ui \
    ocularinstruc.ui \
    ocularexam.ui \
    fielddescr.ui \
    fieldinstruc.ui \
    fieldexam.ui \
    colorexam.ui \
    colorinstruc.ui \
    colordescr.ui \
    acuityexam.ui \
    acuityinstruc.ui \
    acuitydescr.ui \
    keyboard.ui \
    examcomplete.ui

INCLUDEPATH +=/usr/local/include

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../../Documents/opencvarm/opencv-2.4.10/build/lib/release/ -lopencv_calib3d -lopencv_contrib -lopencv_core -lopencv_features2d -lopencv_flann -lopencv_highgui -lopencv_imgproc -lopencv_legacy -lopencv_ml -lopencv_objdetect -lopencv_ts -lopencv_video -lopencv_photo -lopencv_gpu
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../../Documents/opencvarm/opencv-2.4.10/build/lib/debug/ -lopencv_calib3d -lopencv_contrib -lopencv_core -lopencv_features2d -lopencv_flann -lopencv_highgui -lopencv_imgproc -lopencv_legacy -lopencv_ml -lopencv_objdetect -lopencv_ts -lopencv_video -lopencv_photo -lopencv_gpu
else:unix: LIBS += -L$$PWD/../../../../../Documents/opencvarm/opencv-2.4.10/build/lib/ -lopencv_calib3d -lopencv_contrib -lopencv_core -lopencv_features2d -lopencv_flann -lopencv_highgui -lopencv_imgproc -lopencv_legacy -lopencv_ml -lopencv_objdetect -lopencv_ts -lopencv_video -lopencv_photo -lopencv_gpu

INCLUDEPATH += $$PWD/../../../../../Documents/opencvarm/opencv-2.4.10/build/include
DEPENDPATH += $$PWD/../../../../../Documents/opencvarm/opencv-2.4.10/build/include
