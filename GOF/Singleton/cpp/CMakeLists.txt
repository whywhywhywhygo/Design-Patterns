cmake_minimum_required(VERSION 3.13)
project(cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpp main.cpp MazeFactory.h MazeFactory.cpp BombedMazeFactory.cpp BombedMazeFactory.h EnchantedMazeFactory.cpp EnchantedMazeFactory.h)