cmake_minimum_required(VERSION 3.13)
project(cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpp main.cpp Shape.h Shape.cpp TextView.cpp TextView.h TextShapeClassAdapter.cpp TextShapeClassAdapter.h Coord.cpp Coord.h Point.cpp Point.h TextManipulator.cpp TextManipulator.h Manipulator.cpp Manipulator.h TextShapeObjectAdapter.cpp TextShapeObjectAdapter.h)