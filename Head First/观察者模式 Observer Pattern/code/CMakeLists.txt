cmake_minimum_required(VERSION 3.12)
project(code)

set(CMAKE_CXX_STANDARD 17)

add_executable(code main.cpp subject.h weatherdata.cpp weatherdata.h observer.h displayelement.h currentconditionsdisplay.cpp currentconditionsdisplay.h)