#ifndef STRUCTSCPP_NODE_H
#define STRUCTSCPP_NODE_H

class Node {
public:
    int value;
    Node *next;

    explicit Node(const int& value);
};

#endif