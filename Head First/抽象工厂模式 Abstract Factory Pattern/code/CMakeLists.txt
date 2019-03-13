cmake_minimum_required(VERSION 3.12)
project(code)

set(CMAKE_CXX_STANDARD 17)

add_executable(code main.cpp dough.h thickcrustdough.h thincrustdough.h sauce.h plumtomatosauce.h marinarasauce.h pizzaingredientfactory.h nypizzaingredientfactory.h pizza.h cheesepizza.h pizzastore.h nypizzastore.h)