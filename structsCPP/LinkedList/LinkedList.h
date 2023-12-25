#ifndef STRUCTSCPP_LINKEDLIST_H
#define STRUCTSCPP_LINKEDLIST_H

#include "Node.h"

class LinkedList {
    Node* head;
    Node* tail;
    int length;

public:
    LinkedList();

    // Creates the list and inits the first node
    explicit LinkedList(int value);

    ~LinkedList();

    // creates a node and adds it to the end of list
    void append(const int&value);

    // creates a node and adds it to the beginning of list
    void prepend(const int&value);

    void removeFirst();

    void removeLast();

    // creates a node and inserts it at a certain position
    bool insert(const int&index, const int&value);

    bool setNode(const int&index, const int&value);

    void deleteNode(const int&index);

    void printList() const;

    Node* getNode(const int&index) const;

    void getHead() const;

    void getTail() const;

    void getLength() const;

    void reverse();
};

#endif //STRUCTSCPP_LINKEDLIST_H
