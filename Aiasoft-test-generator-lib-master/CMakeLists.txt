cmake_minimum_required(VERSION 3.28)
project(test_generator)

set(CMAKE_CXX_STANDARD 17)

add_library(test_generator STATIC library.cpp)
