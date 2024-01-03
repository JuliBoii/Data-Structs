cmake_minimum_required(VERSION 3.26)
project(structsCPP)

set(CMAKE_CXX_STANDARD 20)

set(LL_HEADER_FILES LinkedList/LinkedList.h
    LinkedList/Node.h
)

set(LL_SOURCE_FILES LinkedList/LinkedList.cpp
    LinkedList/Node.cpp
)

add_executable(point PointersAndClasses/pointer_ex1.cpp)
add_executable(cla PointersAndClasses/class_ex1.cpp)
add_executable(linked LinkedList/main.cpp ${LL_HEADER_FILES} ${LL_SOURCE_FILES})