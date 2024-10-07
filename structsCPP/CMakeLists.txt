cmake_minimum_required(VERSION 3.26)
project(structsCPP)

set(CMAKE_CXX_STANDARD 20)

set(NODE_HEADER_FILES Node/Node.h
        Node/NodeD.hpp
)
set(NODE_SOURCE_FILES Node/Node.cpp
        Node/NodeD.cpp
)

set(LL_HEADER_FILE LinkedList/LinkedList.h)
set(LL_SOURCE_FILE LinkedList/LinkedList.cpp)
set(DLL_HEADER_FILE DoublyLinkedList/DLinkedList.hpp)
set(DLL_SOURCE_FILE DoublyLinkedList/DLinkedList.cpp)
set(STACK_HEADER_FILES Stack/Stack.hpp
        Stack/Queue.hpp
)
set(STACK_SOURCE_FILES Stack/Stack.cpp
        Stack/Queue.cpp
)

add_executable(p1 PointersAndClasses/pointer_ex1.cpp)
add_executable(c1 PointersAndClasses/class_ex1.cpp)
add_executable(ll_exec LinkedList/main.cpp ${LL_HEADER_FILE} ${LL_SOURCE_FILE} ${NODE_HEADER_FILES} ${NODE_SOURCE_FILES})
add_executable(dll_exec DoublyLinkedList/main.cpp ${DLL_HEADER_FILE} ${DLL_SOURCE_FILE} ${NODE_HEADER_FILES} ${NODE_SOURCE_FILES})
add_executable(stack_exec Stack/main.cpp ${STACK_HEADER_FILES} ${STACK_SOURCE_FILES} ${NODE_HEADER_FILES} ${NODE_SOURCE_FILES})