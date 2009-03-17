# -------------------------------------------------
# Project created by QtCreator 2009-03-11T20:37:52
# -------------------------------------------------
TARGET = WiiScouter
TEMPLATE = app
SOURCES += main.cpp \
    wiiscouter.cpp \
    utility.cpp \
    scheduledialog.cpp
HEADERS += wiiscouter.h \
    utility.h \
    game.h \
    scheduledialog.h
FORMS += wiiscouter.ui
LIBS += -lwiiuse
QT += sql
