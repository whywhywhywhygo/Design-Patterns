cmake_minimum_required(VERSION 3.12)
project(code)

set(CMAKE_CXX_STANDARD 17)

add_executable(code main.cpp tuner.cpp tuner.h screen.cpp screen.h popcornpopper.cpp popcornpopper.h amplifier.cpp amplifier.h cdplayer.cpp cdplayer.h theaterlights.cpp theaterlights.h projector.cpp projector.h dvdplayer.cpp dvdplayer.h hometheaterfacade.cpp hometheaterfacade.h)