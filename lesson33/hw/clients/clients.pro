TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        bank.cpp \
        client.cpp \
        credit.cpp \
        date.cpp \
        dollars.cpp \
        email.cpp \
        job.cpp \
        main.cpp \
        money.cpp

HEADERS += \
    bank.hpp \
    children.hpp \
    client.hpp \
    credit.hpp \
    date.hpp \
    dollars.hpp \
    email.hpp \
    job.hpp \
    money.hpp
