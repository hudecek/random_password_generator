TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp
QMAKE_CXXFLAGS += -Wall -Werror -pedantic -Wextra

include(deployment.pri)
qtcAddDeployment()

