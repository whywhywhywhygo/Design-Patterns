cmake_minimum_required(VERSION 3.13)
project(cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpp main.cpp MazeFactory.cpp MazeFactory.h MazePrototypeFactory.cpp MazePrototypeFactory.h MazeGame.cpp MazeGame.h maze/bombedwall.h maze/bombedwall.cpp maze/door.h maze/door.cpp maze/doorneedingspell.h maze/doorneedingspell.cpp maze/enchantedroom.h maze/enchantedroom.cpp maze/mapsite.cpp maze/mapsite.h maze/maze.h maze/maze.cpp maze/room.h maze/room.cpp maze/roomwithabomb.h maze/roomwithabomb.cpp maze/spell.h maze/spell.cpp maze/wall.cpp maze/wall.h)