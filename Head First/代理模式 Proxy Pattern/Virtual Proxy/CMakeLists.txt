cmake_minimum_required(VERSION 3.12)
project(Virtual_Proxy)

set(CMAKE_CXX_STANDARD 17)

add_executable(Virtual_Proxy main.cpp icon.h imageproxy.cpp imageproxy.h)

target_link_libraries(Virtual_Proxy pthread)