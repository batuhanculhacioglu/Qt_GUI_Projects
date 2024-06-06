#opengl , -lOpenGL32, -lGLU32 dahil edildi.

QT       += core gui opengl serialport charts
LIBS += -lOpenGL32 -lGLU32

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    AR_camControl.cpp \
    AR_drawObject.cpp \
    ar_serialCommunication.cpp \
    main.cpp \
    mainwindow.cpp \
    rocketSimWidget.cpp \
    test.cpp

HEADERS += \
    AR_camControl.h \
    AR_drawObject.h \
    ar_serialCommunication.h \
    mainwindow.h \
    rocketSimWidget.h \
    test.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
