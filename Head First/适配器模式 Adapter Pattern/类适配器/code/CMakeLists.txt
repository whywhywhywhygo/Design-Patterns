cmake_minimum_required(VERSION 3.12)
project(code)

set(CMAKE_CXX_STANDARD 17)

add_executable(code main.cpp turkey.h duck.h wildturkey.cpp wildturkey.h turkeyadapter.cpp turkeyadapter.h)