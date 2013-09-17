#-------------------------------------------------
#
# Project created by QtCreator 2013-09-17T10:14:03
#
#-------------------------------------------------

lessThan(QT_MAJOR_VERSION, 5): error(This project requires Qt 5 or later)
#greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
# Needed for C++11 support.
CONFIG += c++11


QT += qml quick widgets

TARGET = QMLSTLAlgo
TEMPLATE = app


SOURCES += main.cpp

HEADERS  +=

OTHER_FILES += \
    main.qml


qmlki.path = $${OUT_PWD}
qmlki.files += main.qml

INSTALLS += qmlki
