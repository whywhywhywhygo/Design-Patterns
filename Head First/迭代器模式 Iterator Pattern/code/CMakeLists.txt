cmake_minimum_required(VERSION 3.12)
project(code)

set(CMAKE_CXX_STANDARD 17)

add_executable(code main.cpp dinermenu.cpp dinermenu.h iterator.h dinermenuiterator.hpp menuitem.cpp menuitem.h waitress.cpp waitress.h menu.h)