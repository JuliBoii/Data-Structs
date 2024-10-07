//
// Created by Angel Hernandez on 10/4/24.
//

#include "DLinkedList.hpp"

#include <iostream>


DLinkedList::DLinkedList() {
    head = nullptr;
    tail = nullptr;
}

DLinkedList::DLinkedList(int value) {
    Node_D* newNode = new Node_D(value);
    head = newNode;
    tail = newNode;
    length = 1;
}

DLinkedList::~DLinkedList() {
    Node_D* temp = head;
    while (temp) {
        head = head->next;
        delete temp;
        temp = head;
    }
}


void DLinkedList::prepend(const int& value) {
    Node_D* newNode = new Node_D(value);
    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    }
    else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    length++;
}

void DLinkedList::append(const int &value) {
    Node_D* newNode = new Node_D(value);

    if (length == 0) {
        head = newNode;
        tail = newNode;
    }
    else {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
    length++;
}

bool DLinkedList::insert(const int &index, const int& value) {
    if (index < 0 || index > length) {return false;}
    if (length == 0) {
        prepend(value);
        return true;
    }
    if (index == length) {
        append(value);
        return true;
    }
    Node_D* newNode = new Node_D(value);
    Node_D* prevNode = getNode(index - 1);
    Node_D* nextNode = prevNode->next;

    newNode->next = nextNode;
    newNode->prev = prevNode;
    prevNode->next = newNode;
    nextNode->prev = newNode;
    length++;
    return true;
}

void DLinkedList::deleteFirst() {
    if (length == 0) {
        std::cout << "Empty list." << std::endl;
        return;
    }

    Node_D* temp = head;

    if (length == 1) {
        head = nullptr;
        tail = nullptr;
    } else {
        head = head->next;
        head->prev = nullptr;
    }
    delete temp;
    length--;
}


void DLinkedList::deleteLast() {
    if (length == 0) {
        return;
    }
    Node_D* tempNode = tail;

    if (length == 1) {
        head = nullptr;
        tail = nullptr;
    }
    else {
        tail = tail->prev;
        tail->next = nullptr;
    }
    delete tempNode;
    length--;
}

void DLinkedList::deleteNode(const int &index) {
    if (index < 0 || index >= length) { return; }
    if (index == 0) { return deleteFirst(); }
    if (index == length - 1) { return deleteLast(); }

    Node_D* temp = getNode(index);
    temp->next->prev = temp->prev;
    temp->prev->next = temp->next;
    delete temp;
    length--;
}

void DLinkedList::printList() const {
    if (length == 0) {
        std::cout << "Empty list." << std::endl;
        return;
    }

    Node_D* current = head;
    while (current != nullptr) {
        std::cout << current->value << std::endl;
        current = current->next;
    }
}

Node_D *DLinkedList::getNode(const int &index) const {
    if (length == 0 || index > length || index < 0) {
        return nullptr;
    }

    Node_D* temp = nullptr;
    if (index < length / 2) {
        temp = head;
        for (int i = 0; i < index / 2; i++) {
            temp = temp->next;
        }
    } else {
        temp = tail;
        for (int i = length - 1; i > index; i--) {
            temp = temp->prev;
        }
    }
    return temp;
}


void DLinkedList::getLength() const {
    std::cout << "Length: " << length << std::endl;
}

void DLinkedList::getHeadValue() const {
    std::cout << "Head value: " << head->value << std::endl;
}

void DLinkedList::getTailValue() const {
    std::cout << "Tail value: " << tail->value << std::endl;
}

bool DLinkedList::setNode(const int &index, const int &value) const {
    Node_D* temp = getNode(index);
    if (temp) {
        temp->value = value;
        return true;
    }
    return false;
}
