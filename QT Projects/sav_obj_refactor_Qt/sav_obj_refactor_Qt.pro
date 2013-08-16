#-------------------------------------------------
#
# Project created by QtCreator 2013-08-15T09:14:09
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = sav_obj_refactor_Qt
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += \
    ../lib/stdafx.cpp \
    ../lib/sqlite3.c \
    ../lib/pkmds_gba.cpp \
    ../lib/pkmds_vector.cpp \
    ../lib/pkmds_g5_sqlite.cpp \
    ../lib/pkmds_g5.cpp \
    ../pkmds_SAV_refactor/pkmds_SAV_refactor/main.cpp

HEADERS += \
    ../include/sqlite3.h \
    ../include/pkmds/wondercard.h \
    ../include/pkmds/pokeprng.h \
    ../include/pkmds/pkmds_vector.h \
    ../include/pkmds/pkmds_gba.h \
    ../include/pkmds/pkmds_g5_sqlite.h \
    ../include/pkmds/stdafx.h \
    ../include/pkmds/pkmds_g5.h
