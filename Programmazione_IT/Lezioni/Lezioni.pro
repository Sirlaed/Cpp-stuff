QT = core

CONFIG += c++17 cmdline

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        Lezioni_10.cpp \
        Lezioni_2.cpp \
        Lezioni_3.cpp \
        Lezioni_4.cpp \
        Lezioni_5.cpp \
        Lezioni_6.cpp \
        Lezioni_7.cpp \
        Lezioni_9.cpp \
        main.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
