//
// Created by Angel Hernandez on 10/6/24.
//

#include "Queue.hpp"
#include <climits>

Queue::Queue() {
    this->first = nullptr;
    this->last = nullptr;
}

Queue::Queue(const int &value) {
    Node* newNode = new Node(value);
    first= newNode;
    last = newNode;
    size = 1;
}

void Queue::enqueue(const int& value) {
    Node* newNode = new Node(value);

    if (size == 0) {
        first = newNode;
        last = newNode;
    } else {
        last->next = newNode;
        last = newNode;
    }
    size++;
}

int Queue::dequeue() {
    if (size == 0) { return INT_MIN; }

    Node* temp = first;
    int dequeueValue = temp->value;
    if (size == 1) {
        first = nullptr;
        last = nullptr;
    } else {
        first = temp->next;
    }
    delete temp;
    size--;
    return dequeueValue;
}

void Queue::print() const {
    Node* temp = first;
    while (temp) {
        std::cout << temp->value << '\n';
        temp = temp->next;
    }
}

int Queue::getFirst() const {
    return first->value;
}

int Queue::getLast() const {
    return last->value;
}

int Queue::getSize() const {
    return size;
}

