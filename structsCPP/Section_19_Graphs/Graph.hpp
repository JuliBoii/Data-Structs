//
// Created by Angel Hernandez on 10/9/24.
//

#ifndef GRAPH_HPP
#define GRAPH_HPP


#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>


class Graph {
    std::unordered_map<std::string, std::unordered_set<std::string>> adjList;

    public:
    void print() const;
    bool addVertex(const std::string &vertex);
    bool addEdge(const std::string &vertex1, const std::string &vertex2);
    bool removeEdge(const std::string &vertex1, const std::string &vertex2);
    bool removeVertex(const std::string &vertex);
};



#endif //GRAPH_HPP
