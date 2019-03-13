cmake_minimum_required(VERSION 3.12)
project(code)

set(CMAKE_CXX_STANDARD 17)

add_executable(code main.cpp quackable.h mallardduck.cpp mallardduck.h redheadduck.cpp redheadduck.h duckcall.cpp duckcall.h rubberduck.cpp rubberduck.h goose.cpp goose.h gooseadapter.cpp gooseadapter.h quackcounter.cpp quackcounter.h abstractduckfactory.h duckfactory.cpp duckfactory.h countingduckfactory.cpp countingduckfactory.h flock.cpp flock.h quackobservable.h observer.h quackologist.cpp quackologist.h observable.cpp observable.h)