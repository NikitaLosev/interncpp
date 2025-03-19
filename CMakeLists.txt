cmake_minimum_required(VERSION 3.29)
project(interncpp)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)

FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/v1.13.0.zip
)
FetchContent_MakeAvailable(googletest)

add_executable(my_tests
        tests/test_graph.cpp
        src/graph.cpp
        src/graph.h
)

add_executable(interncpp src/main.cpp
        src/graph.cpp
        src/graph.h)

target_link_libraries(my_tests gtest gtest_main)

include(GoogleTest)
gtest_discover_tests(my_tests)