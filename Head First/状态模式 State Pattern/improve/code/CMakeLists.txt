cmake_minimum_required(VERSION 3.12)
project(code)

set(CMAKE_CXX_STANDARD 17)

add_executable(code main.cpp state.h soldoutstate.cpp soldoutstate.h noquarterstate.cpp noquarterstate.h gumballmachine.cpp gumballmachine.h hasquarterstate.cpp hasquarterstate.h soldstate.cpp soldstate.h winnerstate.cpp winnerstate.h)