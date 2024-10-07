//
// Created by Angel Hernandez on 10/6/24.
//

#include "Queue.hpp"

Queue::Queue() {
    this->first = nullptr;
    this->last = nullptr;
}

Queue::Queue(const int &value) {
    Node* newNode = new Node(value);
    first= newNode;
    last = newNode;
}

