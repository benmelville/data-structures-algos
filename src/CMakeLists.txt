cmake_minimum_required(VERSION 3.21)

project(data-structures-algos)

set(CMAKE_CXX_STANDARD 17)

enable_testing()

find_package(GTest REQUIRED)
include(GoogleTest)

add_subdirectory(singly-linked-list)