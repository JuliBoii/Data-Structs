//
// Created by Angel Hernandez on 10/9/24.
//


#include <iostream>
#include "Graph.hpp"


int main() {
    Graph* myGraph = new Graph();

    myGraph->addVertex("A");
    myGraph->addVertex("B");
    myGraph->addVertex("C");
    myGraph->addVertex("D");

    myGraph->addEdge("A", "B");
    myGraph->addEdge("A", "D");
    myGraph->addEdge("C", "B");
    myGraph->addEdge("C", "D");

    myGraph->print();

    std::cout << "\n";

    myGraph->removeEdge("A", "B");

    myGraph->print();

    std::cout << "\n";

    myGraph->removeVertex("D");

    myGraph->print();

    return 0;
}