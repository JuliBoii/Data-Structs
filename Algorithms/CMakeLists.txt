cmake_minimum_required(VERSION 3.29)
project(Algorithms VERSION 1.0
                   DESCRIPTION "Directory that implements various Algorithms in C++"
                   LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

add_executable(tailR Recursion/tailRecursion.cpp)
add_executable(headR Recursion/headRecursion.cpp)
add_executable(treeR Recursion/treeRecursion.cpp)
