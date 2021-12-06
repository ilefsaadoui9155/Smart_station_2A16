QT       += core gui sql charts printsupport network quick multimedia multimediawidgets serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    DuMesengerConnectionDialog.cpp \
    bus/bus.cpp \
    bus/mainwindow2.cpp \
    chat.cpp \
    client/clients.cpp \
    client/excel.cpp \
    client/gestionclient.cpp \
    client/smtp.cpp \
    connection.cpp \
    employes.cpp \
    main.cpp \
    login.cpp \
    mainwindow.cpp \
    qcustomplot.cpp \
    reparation/mainwindow1.cpp \
    reparation/reparation.cpp \
    temperature/dialog1.cpp \
    ticket/dialog.cpp \
    ticket/mainwindow3.cpp \
    ticket/qrcodegen.cpp \
    ticket/ticket.cpp \
    ticket/tickets.cpp \
    window.cpp

HEADERS += \
    DuMesengerConnectionDialog.h \
    bus/bus.h \
    bus/mainwindow2.h \
    chat.h \
    client/Smtp.h \
    client/clients.h \
    client/excel.h \
    client/gestionclient.h \
    connection.h \
    employes.h \
    login.h \
    mainwindow.h \
    qcustomplot.h \
    reparation/mainwindow1.h \
    reparation/reparation.h \
    temperature/dialog1.h \
    ticket/dialog.h \
    ticket/mainwindow3.h \
    ticket/qrcodegen.hpp \
    ticket/ticket.h \
    ticket/tickets.h \
    window.h

FORMS += \
    DuMesengerConnectionDialog.ui \
    bus/mainwindow2.ui \
    chat.ui \
    client/gestionclient.ui \
    login.ui \
    mainwindow.ui \
    reparation/mainwindow1.ui \
    temperature/dialog1.ui \
    ticket/dialog.ui \
    ticket/mainwindow3.ui \
    ticket/ticket.ui \
    window.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

SUBDIRS += \
    Atelier_Connexion.pro \
    bus/projectbus.pro \
    client/station.pro \
    reparation/Atelier_Crud_Vf.pro \
    temperature/DS18B20_Qt.pro \
    ticket/station.pro

DISTFILES += \
    Atelier_Connexion.pro.user \
    Atelier_Connexion.pro.user.d567f1b.4.8-pre1 \
    bus/projectbus.pro.user \
    bus/projectbus.pro.user.259e084 \
    client/station.pro.user \
    reparation/Atelier_Crud_Vf.pro.user \
    reparation/Atelier_Crud_Vf.pro.user.446ecbd \
    reparation/Atelier_Crud_Vf.pro.user.53381ca.4.8-pre1 \
    reparation/Atelier_Crud_Vf.pro.user.d567f1b \
    reparation/Atelier_Crud_Vf.pro.user.ed7ae0f \
    reparation/logo.png \
    temperature/DS18B20_Qt.pro.user \
    ticket/station.pro.user \
    ticket/station.pro.user.a1a4335

RESOURCES +=
