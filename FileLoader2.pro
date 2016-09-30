#-------------------------------------------------
#
# Project created by QtCreator 2016-09-12T00:01:21
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FileLoader2
TEMPLATE = app



SOURCES += main.cpp\
        mainwindow.cpp \
    fileloader.cpp \
    subject.cpp \
    file.cpp \
    lcdobserver.cpp \
    labelobserver.cpp \
    pbobserver.cpp \


HEADERS  += mainwindow.h \
    fileloader.h \
    observer.h \
    subject.h \
    file.h \
    lcdobserver.h \
    labelobserver.h \
    pbobserver.h

FORMS    += mainwindow.ui



