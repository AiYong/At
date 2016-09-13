QT       += core widgets opengl sql svg

TARGET = At
TEMPLATE = lib

DEFINES += AT_LIBRARY

SOURCES += \
    AWidget.cpp \
    AtApplication.cpp \
    AtFrame.cpp \
    AtDialog.cpp \
    AtCheckBox.cpp \
    AtComboBox.cpp \
    AtDateEdit.cpp \
    AtDateTimeEdit.cpp \
    AtDial.cpp \
    AtDoubleSpinBox.cpp \
    AtFocusFrame.cpp \
    AtFontComboBox.cpp \
    AtLCDNumber.cpp \
    AtLabel.cpp \
    AtLineEdit.cpp \
    AtMenu.cpp \
    AtProgressBar.cpp \
    AtPushButton.cpp \
    AtRadioButton.cpp \
    AtScrollArea.cpp \
    AtScrollBar.cpp \
    AtSlider.cpp \
    AtSpinBox.cpp \
    AtTabBar.cpp \
    AtTabWidget.cpp \
    AtTimeEdit.cpp \
    AtToolBox.cpp \
    AtToolButton.cpp

HEADERS += \
    AtGlobal.h \
    AtWidget.h \
    AtApplication.h \
    AtFrame.h \
    AtDialog.h \
    AtCheckBox.h \
    AtComboBox.h \
    AtDateEdit.h \
    AtDateTimeEdit.h \
    AtDial.h \
    AtDoubleSpinBox.h \
    AtFocusFrame.h \
    AtFontComboBox.h \
    AtLCDNumber.h \
    AtLabel.h \
    AtLineEdit.h \
    AtMenu.h \
    AtProgressBar.h \
    AtPushButton.h \
    AtRadioButton.h \
    AtScrollArea.h \
    AtScrollBar.h \
    AtSlider.h \
    AtSpinBox.h \
    AtTabBar.h \
    AtTabWidget.h \
    AtTimeEdit.h \
    AtToolBox.h \
    AtToolButton.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
