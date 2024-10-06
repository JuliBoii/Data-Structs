cmake_minimum_required(VERSION 3.26)
project(structsCPP)

set(CMAKE_CXX_STANDARD 20)

set(NODE_HEADER_FILE Node/Node.h
        Node/NodeD.hpp
)
set(NODE_SOURCE_FILE Node/Node.cpp
        Node/NodeD.cpp
)

set(LL_HEADER_FILES LinkedList/LinkedList.h)
set(LL_SOURCE_FILES LinkedList/LinkedList.cpp)
set(DLL_HEADER_FILES DoublyLinkedList/DLinkedList.hpp)
set(DLL_SOURCE_FILES DoublyLinkedList/DLinkedList.cpp)

add_executable(p1 PointersAndClasses/pointer_ex1.cpp)
add_executable(c1 PointersAndClasses/class_ex1.cpp)
add_executable(ll_exec LinkedList/main.cpp ${LL_HEADER_FILES} ${LL_SOURCE_FILES} ${NODE_HEADER_FILE} ${NODE_SOURCE_FILE})
add_executable(dll_exec DoublyLinkedList/main.cpp ${DLL_HEADER_FILES} ${DLL_SOURCE_FILES} ${NODE_HEADER_FILE} ${NODE_SOURCE_FILE})