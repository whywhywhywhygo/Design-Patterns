cmake_minimum_required(VERSION 3.13)
project(cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp main.cpp maze/Door.h maze/Door.cpp maze/MapSite.h maze/MapSite.cpp maze/Maze.h maze/Maze.cpp builder/MazeBuilder.h builder/MazeBuilder.cpp director/MazeGame.h director/MazeGame.cpp maze/Room.h maze/Room.cpp builder/CountingMazeBuilder.h builder/CountingMazeBuilder.cpp builder/StandardMazeBuilder.h builder/StandardMazeBuilder.cpp maze/Wall.h maze/Wall.cpp)