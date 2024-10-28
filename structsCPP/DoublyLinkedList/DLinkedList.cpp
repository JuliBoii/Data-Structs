//
// Created by Angel Hernandez on 10/4/24.
//

#include "DLinkedList.hpp"

#include <iostream>


DLinkedList::DLinkedList() {
    this->head = nullptr;
    this->tail = nullptr;
}

DLinkedList::DLinkedList(const int& value) {
    Node_D* newNode = new Node_D(value);
    this->head = newNode;
    this->tail = newNode;
    this->length = 1;
}

DLinkedList::~DLinkedList() {
    Node_D* temp = this->head;
    while (temp) {
        this->head = this->head->next;
        delete temp;
        temp = this->head;
    }
}


void DLinkedList::prepend(const int& value) {
    Node_D* newNode = new Node_D(value);

    if (this->head == nullptr) {
        this->head = newNode;
        this->tail = newNode;
    }
    else {
        newNode->next = this->head;
        this->head->prev = newNode;
        this->head = newNode;
    }
    this->length++;
}

void DLinkedList::append(const int& value) {
    Node_D* newNode = new Node_D(value);

    if (this->length == 0) {
        this->head = newNode;
        this->tail = newNode;
    }
    else {
        newNode->prev = this->tail;
        this->tail->next = newNode;
        this->tail = newNode;
    }
    this->length++;
}

bool DLinkedList::insert(const int& index, const int& value) {
    if (index < 0 || index > this->length) { return false; }

    if (this->length == 0) {
        this->prepend(value);
        return true;
    }

    if (index == this->length) {
        this->append(value);
        return true;
    }

    Node_D* newNode = new Node_D(value);
    Node_D* prevNode = this->getNode(index - 1);
    Node_D* nextNode = prevNode->next;

    newNode->next = nextNode;
    newNode->prev = prevNode;
    prevNode->next = newNode;
    nextNode->prev = newNode;

    this->length++;
    return true;
}

bool DLinkedList::setNode(const int& index, const int& value) {
    Node_D* temp = this->getNode(index);
    if (temp) {
        temp->value = value;
        return true;
    }
    return false;
}

void DLinkedList::deleteFirst() {
    if (this->length == 0) {
        return;
    }

    Node_D* temp = this->head;

    if (this->length == 1) {
        this->head = nullptr;
        this->tail = nullptr;
    } else {
        this->head = this->head->next;
        this->head->prev = nullptr;
    }
    delete temp;
    this->length--;
}


void DLinkedList::deleteLast() {
    if (this->length == 0) {
        return;
    }

    Node_D* tempNode = this->tail;

    if (this->length == 1) {
        this->head = nullptr;
        this->tail = nullptr;
    }
    else {
        this->tail = this->tail->prev;
        this->tail->next = nullptr;
    }
    delete tempNode;
    this->length--;
}

void DLinkedList::deleteNode(const int& index) {
    if (index < 0 || index >= this->length) { return; }
    if (index == 0) { return this->deleteFirst(); }
    if (index == this->length - 1) { return this->deleteLast(); }

    Node_D* temp = this->getNode(index);
    temp->next->prev = temp->prev;
    temp->prev->next = temp->next;
    delete temp;
    this->length--;
}

void DLinkedList::printList() const {
    if (this->length == 0) {
        std::cout << "Empty list." << std::endl;
        return;
    }

    Node_D* current = this->head;
    while (current->next != nullptr) {
        std::cout << current->value << " <-> ";
        current = current->next;
    }
    std::cout << current->value << '\n';
}

Node_D *DLinkedList::getNode(const int& index) const {
    if (this->length == 0 || index > this->length || index < 0) {
        return nullptr;
    }

    Node_D* temp = nullptr;

    if (index < (this->length / 2)) {
        temp = this->head;

        for (int i = 0; i < index; ++i) { temp = temp->next; }

    } else {
        temp = this->tail;

        for (int i = this->length - 1; i > index; --i) { temp = temp->prev; }

    }
    return temp;
}


int DLinkedList::getLength() const {
    return this->length;
}

Node_D* DLinkedList::getHead() const {
    return this->head;
}

Node_D* DLinkedList::getTail() const {
    return this->tail;
}
