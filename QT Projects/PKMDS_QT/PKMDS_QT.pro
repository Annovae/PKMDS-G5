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
    ../../lib/stdafx.cpp \
    ../../lib/sqlite3.c \
    ../../lib/pkmds_vector.cpp \
    ../../lib/pkmds_gba.cpp \
    ../../lib/pkmds_g5_sqlite.cpp \
    ../../lib/pkmds_g5.cpp

HEADERS  += \
    ../qt_sqlite.h \
    ../pkmviewer.h \
    ../mouseeventeater.h \
    ../frmboxes.h \
    ../../include/sqlite3.h \
    ../../include/pkmds/wondercard.h \
    ../../include/pkmds/stdafx.h \
    ../../include/pkmds/pokeprng.h \
    ../../include/pkmds/pkmds_vector.h \
    ../../include/pkmds/pkmds_gba.h \
    ../../include/pkmds/pkmds_g5_sqlite.h \
    ../../include/pkmds/pkmds_g5.h

FORMS    += \
    ../pkmviewer.ui \
    ../frmboxes.ui
