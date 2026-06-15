cmake_minimum_required(VERSION 3.26)
project(structsCPP)

set(CMAKE_CXX_STANDARD 20)

set(NODE_HEADER_FILES Node/Node.h
        Node/NodeD.hpp
        Node/TreeNode.hpp
        Node/HashNode.hpp
)
set(NODE_SOURCE_FILES Node/Node.cpp
        Node/NodeD.cpp
        Node/TreeNode.cpp
        Node/HashNode.cpp
)

set(LL_HEADER_FILE Section_5_LinkedList/LinkedList.h)
set(LL_SOURCE_FILE Section_5_LinkedList/LinkedList.cpp)
set(DLL_HEADER_FILE Section_8_DoublyLinkedList/DLinkedList.hpp)
set(DLL_SOURCE_FILE Section_8_DoublyLinkedList/DLinkedList.cpp)
set(STACK_HEADER_FILES Section_11_Stacks_and_Queues/Stack.hpp
        Section_11_Stacks_and_Queues/Queue.hpp
)
set(STACK_SOURCE_FILES Section_11_Stacks_and_Queues/Stack.cpp
        Section_11_Stacks_and_Queues/Queue.cpp
)
set(TREE_HEADER_FILES Section_14_Trees/BinarySearchTree.hpp)
set(TREE_SOURCE_FILES Section_14_Trees/BinarySearchTree.cpp)
set(HASH_HEADER_FILE Section_16_HashTable/HashTable.hpp)
set(HASH_SOURCE_FILE Section_16_HashTable/HashTable.cpp)
set(GRAPH_HEADER_FILE Section_19_Graphs/Graph.hpp)
set(GRAPH_SOURCE_FILE Section_19_Graphs/Graph.cpp)

add_executable(p1 Section_4_PointersAndClasses/pointer_ex1.cpp)
add_executable(c1 Section_4_PointersAndClasses/class_ex1.cpp)
add_executable(ll_exec Section_5_LinkedList/main.cpp ${LL_HEADER_FILE} ${LL_SOURCE_FILE} ${NODE_HEADER_FILES} ${NODE_SOURCE_FILES})
add_executable(dll_exec Section_8_DoublyLinkedList/main.cpp ${DLL_HEADER_FILE} ${DLL_SOURCE_FILE} ${NODE_HEADER_FILES} ${NODE_SOURCE_FILES})
add_executable(stack_exec Section_11_Stacks_and_Queues/main.cpp ${STACK_HEADER_FILES} ${STACK_SOURCE_FILES} ${NODE_HEADER_FILES} ${NODE_SOURCE_FILES})
add_executable(bst_exec Section_14_Trees/main.cpp ${NODE_HEADER_FILES} ${NODE_SOURCE_FILES} ${TREE_HEADER_FILES} ${TREE_SOURCE_FILES})
add_executable(ht_exec Section_16_HashTable/main.cpp ${HASH_HEADER_FILE} ${HASH_SOURCE_FILE} ${NODE_HEADER_FILES} ${NODE_SOURCE_FILES})
add_executable(graph_exec Section_19_Graphs/main.cpp ${GRAPH_HEADER_FILE} ${GRAPH_SOURCE_FILE})