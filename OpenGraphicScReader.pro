TEMPLATE = app
TARGET = OpenGraphicScReader

QT = core gui widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    main.cpp \
    pc_sc_reader.cpp

HEADERS += \
    pc_sc_reader.h
