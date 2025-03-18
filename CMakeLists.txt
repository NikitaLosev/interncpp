cmake_minimum_required(VERSION 3.29)
project(interncpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(interncpp src/main.cpp
        src/Graph.cpp
        src/Graph.h)
