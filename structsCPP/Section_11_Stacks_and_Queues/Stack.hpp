//
// Created by Angel Hernandez on 10/6/24.
//

#ifndef STACK_HPP
#define STACK_HPP

#include "../Node/Node.h"

class Stack {
    Node *top;
    int size{0};
public:
    Stack();
    explicit Stack(const int& value);
    ~Stack();
    void push(const int& value);
    int pop();
    void print() const;
    int getTop() const;
    int getSize() const;
};



#endif //STACK_HPP
