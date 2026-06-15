#include "LinkedList.h"

#include <iostream>

LinkedList::LinkedList() {
    this->head = nullptr;
    this->tail = nullptr;
    this->length = 0;
}

LinkedList::LinkedList(const int& value) {
    Node* newNode = new Node(value);
    this->head = newNode;
    this->tail = newNode;
    this->length = 1;
}

LinkedList::~LinkedList() {
    Node* temp = this->head;
    while (this->head) {
        this->head = this->head->next;
        delete temp;
        temp = this->head;
    }
    this->tail = nullptr;
    this->length = 0;
}

void LinkedList::append(const int& value) {
    Node* newNode = new Node(value);

    if (this->length == 0) {
        this->head = newNode;
        this->tail = newNode;
    }
    else {
        this->tail->next = newNode;
        this->tail = newNode;
    }
    this->length++;
}

void LinkedList::prepend(const int& value) {
    Node* newNode = new Node(value);

    if (this->length == 0) {
        this->head = newNode;
        this->tail = newNode;
    }
    else {
        newNode->next = this->head;
        this->head = newNode;
    }
    this->length++;
}

bool LinkedList::insert(const int& index, const int& value) {
    if (index < 0 || index > this->length) { return false; }

    if (index == 0) {
        this->prepend(value);
        return true;
    }

    if (index == this->length) {
        this->append(value);
        return true;
    }

    Node* newNode = new Node(value);
    Node* temp = this->getNode(index - 1);

    newNode->next = temp->next;
    temp->next = newNode;

    this->length++;
    return true;
}

bool LinkedList::setNode(const int& index, const int& value) {
    Node* temp = this->getNode(index);
    if (temp) {
        temp->value = value;
        return true;
    }
    return false;
}

void LinkedList::deleteNode(const int& index) {
    if (index < 0 || index >= this->length) return;

    if (index == 0) return this->removeFirst();

    if (index == this->length - 1) return this->removeLast();

    Node* prevNode = this->getNode(index - 1);
    Node* temp = prevNode->next;
    prevNode->next = temp->next;

    delete temp;
    this->length--;
}


void LinkedList::removeFirst() {
    if (this->length == 0) {
        return;
    }

    Node* temp = this->head;

    if (this->length == 1) {
        this->head = nullptr;
        this->tail = nullptr;
    }
    else {
        this->head = this->head->next;
    }

    delete temp;
    this->length--;
}


void LinkedList::removeLast() {
    if (this->length == 0) { return; }

    Node* temp = this->head;

    if (this->length == 1) {
        this->head = nullptr;
        this->tail = nullptr;
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

    delete temp;
    this->length--;
}

void LinkedList::printList() const {
    Node* temp = this->head;
    if (!temp) {
        std::cout << "Empty List!\n";
        return;
    }

    while (temp != nullptr) {
        std::cout << temp->value;
        temp = temp->next;
        if (temp != nullptr) {
            std::cout << " -> ";
        }
    }
}

Node* LinkedList::getNode(const int& index) const {
    if (index < 0 || index >= this->length) return nullptr;

    Node* temp = this->head;

    for (int i = 0; i < index; i++) {
        temp = temp->next;
    }

    return temp;
}

Node* LinkedList::getHead() const {
    return this->head;
}

Node* LinkedList::getTail() const {
    return this->tail;
}

int LinkedList::getLength() const {
    return this->length;
}

void LinkedList::reverse() {
    Node* temp = this->head;
    this->head = this->tail;
    this->tail = temp;

    Node* prevNode = nullptr;
    Node* nextNode = temp->next;

    for (int i = 0; i < length; i++) {
        nextNode = temp->next;
        temp->next = prevNode;
        prevNode = temp;
        temp = nextNode;
    }

}

Node* LinkedList::findMiddleNode() const {
    if(this->length == 0) return nullptr;

    const int half = this->length / 2;
    Node* temp = this->head;

    for (int i = 0; i < half; ++i) {
        temp = temp->next;
    }
    return temp;
}

Node* LinkedList::middle() const {
    Node* slow = this->head;
    Node* fast = this->head;

    if (slow == nullptr) return nullptr;

    if (slow->next == nullptr) return slow;

    while(fast != nullptr) {
        if (fast->next == nullptr) break;
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

bool LinkedList::hasLoop() const {
    if (this->head == nullptr) return false;
    if (this->head->next == nullptr) return false;

    Node* slow = this->head;
    Node* fast = this->head;

    while (fast != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) return true;
    }

    return false;
}

