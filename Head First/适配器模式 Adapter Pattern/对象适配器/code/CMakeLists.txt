cmake_minimum_required(VERSION 3.12)
project(code)

set(CMAKE_CXX_STANDARD 17)

add_executable(code main.cpp duck.h mallardduck.cpp mallardduck.h turkey.h turkeyadapter.cpp turkeyadapter.h wildturkey.cpp wildturkey.h)