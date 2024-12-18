#ifndef STRUCTSCPP_LINKEDLIST_H
#define STRUCTSCPP_LINKEDLIST_H

#include "../Node/Node.h"

class LinkedList {
    Node* head;
    Node* tail;
    int length;

public:
    LinkedList();

    // Creates the list and inits the first node
    explicit LinkedList(const int& value);

    ~LinkedList();

    // creates a node and adds it to the end of list
    void append(const int& value);

    // creates a node and adds it to the beginning of list
    void prepend(const int& value);

    void removeFirst();

    void removeLast();

    // creates a node and inserts it at a certain position
    bool insert(const int& index, const int& value);

    bool setNode(const int& index, const int& value);

    void deleteNode(const int& index);

    void printList() const;

    Node* getNode(const int& index) const;

    Node* getHead() const;

    Node* getTail() const;

    int getLength() const;

    void reverse();

    Node* findMiddleNode() const;

    Node* middle() const;

    bool hasLoop() const;
};

#endif //STRUCTSCPP_LINKEDLIST_H
