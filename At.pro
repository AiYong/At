#-------------------------------------------------
#
# Project created by QtCreator 2016-09-13T11:55:17
#
#-------------------------------------------------

QT       += core widgets opengl sql svg

TARGET = At
TEMPLATE = lib

DEFINES += AT_LIBRARY

SOURCES += \
    AWidget.cpp

HEADERS += \
    AtGlobal.h \
    AtWidget.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
