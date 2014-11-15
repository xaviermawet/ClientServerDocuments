#-------------------------------------------------
#
# Project created by QtCreator 2014-11-10T18:50:19
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ApplicDocuments
TEMPLATE = app

CONFIG += c++11

SOURCES += main.cpp\
        Widget.cpp \
    ../utils/Sockets/Socket.cpp \
    ../utils/Sockets/SocketException.cpp \
    ../utils/Sockets/SocketServer.cpp \
    ../utils/Sockets/TCPSocketClient.cpp \
    ../utils/Sockets/TCPSocketServer.cpp \
    ../utils/GDOCP/GDOCP.cpp \
    ../utils/Hash/Hash.cpp \
    ../utils/Hash/RandomPrimeGenerator.cpp \
    ../utils/Parser/IniParser.cpp \
    ../utils/Exceptions/Exception.cpp

HEADERS  += Widget.hpp \
    ../utils/Sockets/Socket.h \
    ../utils/Sockets/SocketException.h \
    ../utils/Sockets/SocketServer.h \
    ../utils/Sockets/TCPSocketClient.h \
    ../utils/Sockets/TCPSocketServer.h \
    ../utils/GDOCP/GDOCP.hpp \
    ../utils/Hash/Hash.hpp \
    ../utils/Hash/RandomPrimeGenerator.hpp \
    ../utils/Parser/IniParser.hpp \
    ../utils/Exceptions/Exception.hpp

FORMS    += Widget.ui
