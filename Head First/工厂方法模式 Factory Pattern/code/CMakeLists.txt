cmake_minimum_required(VERSION 3.12)
project(code)

set(CMAKE_CXX_STANDARD 17)

add_executable(code main.cpp pizzastore.cpp pizzastore.h nystylepizzastore.cpp nystylepizzastore.h pizza.h pizza.cpp cheesepizza.h cheesepizza.cpp)