QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp\
    src/database/database.cpp \
    src/models/categoria.cpp \
    src/models/cliente.cpp \
    src/models/detalleventa.cpp \
    src/models/producto.cpp \
    src/models/usuario.cpp \
    src/models/venta.cpp \
    src/views/login/frmlogin.cpp


HEADERS += \
    mainwindow.h\
    src/database/database.h \
    src/models/categoria.h \
    src/models/cliente.h \
    src/models/detalleventa.h \
    src/models/producto.h \
    src/models/usuario.h \
    src/models/venta.h \
    src/views/login/frmlogin.h

FORMS += \
    mainwindow.ui \
    src/views/login/frmlogin.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
