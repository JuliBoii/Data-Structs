//
// Created by Angel Hernandez on 10/6/24.
//

#include "Stack.hpp"
#include <limits>


Stack::Stack() {
    this->top = nullptr;
}

Stack::Stack(const int &value) {
    Node* newNode = new Node(value);
    top = newNode;
    size = 1;
}

void Stack::push(const int &value) {
    Node* newNode = new Node(value);
    newNode->next = top;
    top = newNode;
    size++;
}

int Stack::pop() {
    if (size == 0) {
        return INT_MIN;
    }

    Node* temp = top;
    int popValue = temp->value;
    top = temp->next;
    delete temp;
    size--;
    return popValue;
}

void Stack::print() const {
    Node* temp = top;
    for (int i = 0; i < size; i++) {
        std::cout << temp->value << '\n';
        temp = temp->next;
    }
}

int Stack::getTop() const {
    return top->value;
}

int Stack::getSize() const {
    return size;
}

