TEMPLATE = app
QT = gui core
CONFIG += qt release warn_on console
DESTDIR = bin
OBJECTS_DIR = build
MOC_DIR = build
UI_DIR = build
FORMS = ui/dialog.ui
HEADERS = src/dialogimpl.h src/student.h src/data.h src/ActivityLabel.h
SOURCES = src/dialogimpl.cpp \
 src/main.cpp \
 src/student.cpp \
 src/data.cpp \
 src/ActivityLabel.cpp
