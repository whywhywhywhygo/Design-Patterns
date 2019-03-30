cmake_minimum_required(VERSION 3.13)
project(cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpp main.cpp Window/Window.cpp Window/Window.h Point.cpp Point.h Window/IconWindow.cpp Window/IconWindow.h Window/ApplicationWindow.cpp Window/ApplicationWindow.h Window/WindowImp/WindowImp.cpp Window/WindowImp/WindowImp.h Coord.cpp Coord.h Window/WindowImp/XWindowImp.cpp Window/WindowImp/XWindowImp.h Window/WindowImp/PMWindowImp.cpp Window/WindowImp/PMWindowImp.h WindowSystemFactory.cpp WindowSystemFactory.h View.cpp View.h)