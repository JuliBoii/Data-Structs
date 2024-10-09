//
// Created by Angel Hernandez on 10/9/24.
//

#ifndef GRAPH_HPP
#define GRAPH_HPP


#include <unordered_map>
#include <unordered_set>
#include <iostream>
#include <string>


class Graph {
    std::unordered_map<std::string, std::unordered_set<std::string>> adjList;

    public:
    void print() const;
    bool addVertex(std::string vertex);
    bool addEdge(std::string vertex1, std::string vertex2);
    bool removeEdge(std::string vertex1, std::string vertex2);
    bool removeVertex(std::string vertex);
};



#endif //GRAPH_HPP
