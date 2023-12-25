#include "LinkedList.h"

#include <iostream>

LinkedList::LinkedList() {
    head = nullptr;
    tail = nullptr;
    length = 0;
}

LinkedList::LinkedList(int value) {
    Node* newNode = new Node(value);
    head = newNode;
    tail = newNode;
    length = 1;
}

LinkedList::~LinkedList() {
    Node* temp = head;
    while (head) {
        head = head->next;
        delete temp;
        temp = head;
    }
}

void LinkedList::append(const int&value) {
    Node* newNode = new Node(value);

    if (length == 0) {
        head = newNode;
        tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
    length++;
}

void LinkedList::prepend(const int&value) {
    Node* newNode = new Node(value);

    if (length == 0) {
        head = newNode;
        tail = newNode;
    }
    else {
        newNode->next = head;
        head = newNode;
    }
    length++;
}

bool LinkedList::insert(const int&index, const int&value) {
    if (index < 0 || index > length) return false;
    if (index == 0) {
        prepend(value);
        return true;
    }
    if (index == length) {
        append(value);
        return true;
    }

    Node* newNode = new Node(value);
    Node* temp = getNode(index - 1);

    newNode->next = temp->next;
    temp->next = newNode;

    length++;
    return true;
}

bool LinkedList::setNode(const int&index, const int&value) {
    if (Node* temp = getNode(index)) {
        temp->value = value;
        return true;
    }
    return false;
}

void LinkedList::deleteNode(const int&index) {
    if (index < 0 || index >= length) return;

    if (index == 0) return removeFirst();

    if (index == length - 1) return removeLast();

    Node* prevNode = getNode(index - 1);
    Node* temp = prevNode->next;

    prevNode->next = temp->next;

    std::cout << "Removed: " << temp->value << std::endl;
    std::cout << std::endl;
    delete temp;

    length--;
}


void LinkedList::removeFirst() {
    if (length == 0) {
        std::cout << "List is Empty!" << std::endl;
        return;
    }
    Node* temp = head;
    if (length == 1) {
        head = nullptr;
        tail = nullptr;
    }
    else {
        head = head->next;
    }
    std::cout << "Removed: " << temp->value << std::endl;
    std::cout << std::endl;

    delete temp;
    length--;
}


void LinkedList::removeLast() {
    if (length == 0) {
        std::cout << "List is Empty!" << std::endl;
        return;
    }
    Node* temp = head;
    if (length == 1) {
        head = nullptr;
        tail = nullptr;
    }
    else {
        Node* prevNode = temp;
        while (temp->next != nullptr) {
            prevNode = temp;
            temp = temp->next;
        }
        tail = prevNode;
        tail->next = nullptr;
    }
    std::cout << "Removed: " << temp->value << std::endl;
    std::cout << std::endl;

    delete temp;
    length--;
}

void LinkedList::printList() const {
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->value << std::endl;
        temp = temp->next;
    }
}

Node* LinkedList::getNode(const int&index) const {
    if (index < 0 || index >= length) return nullptr;
    Node* temp = head;
    for (int i = 0; i < index; i++) {
        temp = temp->next;
    }
    return temp;
}

void LinkedList::getHead() const {
    if (head == nullptr) {
        std::cout << "Head: nullptr" << std::endl;
    }
    else { std::cout << "Head: " << head->value << std::endl; }
}

void LinkedList::getTail() const {
    if (tail == nullptr) {
        std::cout << "Tail: nullptr" << std::endl;
    }
    else { std::cout << "Tail: " << tail->value << std::endl; }
}

void LinkedList::getLength() const {
    std::cout << "Length: " << length << std::endl;
}

void LinkedList::reverse() {
    Node* temp = head;
    head = tail;
    tail = temp;

    Node* prevNode = nullptr;
    Node* nextNode = temp->next;

    for (int i = 0; i < length; i++) {
        nextNode = temp->next;
        temp->next = prevNode;
        prevNode = temp;
        temp = nextNode;
    }

}
