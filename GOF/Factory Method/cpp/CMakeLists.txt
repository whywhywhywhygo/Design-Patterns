cmake_minimum_required(VERSION 3.13)
project(cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpp main.cpp Creator/MazeGame.cpp Creator/MazeGame.h maze/mapsite.cpp maze/mapsite.h maze/room.cpp maze/room.h maze/wall.cpp maze/wall.h maze/door.cpp maze/door.h maze/maze.cpp maze/maze.h maze/enchantedroom.cpp maze/enchantedroom.h maze/spell.cpp maze/spell.h maze/doorneedingspell.cpp maze/doorneedingspell.h maze/bombedwall.cpp maze/bombedwall.h maze/roomwithabomb.cpp maze/roomwithabomb.h Creator/BombedMazeGame.cpp Creator/BombedMazeGame.h Creator/EnchantedMazeGame.cpp Creator/EnchantedMazeGame.h)