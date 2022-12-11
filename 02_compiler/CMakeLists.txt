cmake_minimum_required(VERSION 3.25)

project(hello_world)

set(CMAKE_CXX_STANDARD 14)

add_executable(hello_world func.cpp hello_world.cpp func.cpp)