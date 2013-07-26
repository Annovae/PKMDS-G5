#-------------------------------------------------
#
# Project created by QtCreator 2013-07-26T08:48:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PKMDS_QT
TEMPLATE = app


SOURCES += \
    ../qt_sqlite.cpp \
    ../pkmviewer.cpp \
    ../mouseeventeater.cpp \
    ../main.cpp \
    ../frmboxes.cpp \
    ../../sqlite3.c \
    ../../pkmds_vector.cpp \
    ../../pkmds_gba.cpp \
    ../../pkmds_g5_sqlite.cpp \
    ../../pkmds_g5.cpp

HEADERS  += \
    ../qt_sqlite.h \
    ../pkmviewer.h \
    ../mouseeventeater.h \
    ../frmboxes.h \
    ../../wondercard.h \
    ../../stdafx.h \
    ../../sqlite3.h \
    ../../pokeprng.h \
    ../../pkmds_vector.h \
    ../../pkmds_gba.h \
    ../../pkmds_g5_sqlite.h \
    ../../pkmds_g5.h

FORMS    += \
    ../pkmviewer.ui \
    ../frmboxes.ui
