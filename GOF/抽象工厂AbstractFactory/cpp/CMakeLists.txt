cmake_minimum_required(VERSION 3.13)
project(cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp main.cpp maze/mapsite.cpp maze/mapsite.h maze/room.cpp maze/room.h maze/wall.cpp maze/wall.h maze/door.cpp maze/door.h maze/maze.cpp maze/maze.h factory/mazefactory.cpp factory/mazefactory.h factory/enchantedmazefactory.cpp factory/enchantedmazefactory.h maze/enchantedroom.cpp maze/enchantedroom.h maze/spell.cpp maze/spell.h maze/doorneedingspell.cpp maze/doorneedingspell.h mazegame.cpp mazegame.h factory/bombedmazefactory.cpp factory/bombedmazefactory.h maze/bombedwall.cpp maze/bombedwall.h maze/roomwithabomb.cpp maze/roomwithabomb.h)