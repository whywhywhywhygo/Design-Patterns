cmake_minimum_required(VERSION 3.12)
project(code)

set(CMAKE_CXX_STANDARD 17)

add_executable(code main.cpp menucomponent.cpp menucomponent.h menuitem.cpp menuitem.h menu.cpp menu.h waitress.cpp waitress.h)