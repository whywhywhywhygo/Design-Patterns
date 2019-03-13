cmake_minimum_required(VERSION 3.12)
project(code)

set(CMAKE_CXX_STANDARD 17)

add_executable(code main.cpp beverage.h condimentdecorator.h espresso.cpp espresso.h houseblend.cpp houseblend.h mocha.cpp mocha.h soy.cpp soy.h)