#include "LinkedList.h"
#include <iostream>

int main() {
    auto* myLinkedList = new LinkedList(4);

    myLinkedList->getHead();
    myLinkedList->getTail();
    myLinkedList->getLength();

    std::cout << "\nLinked List:\n";
    myLinkedList->printList();
    std::cout << std::endl;

    myLinkedList->append(5);
    myLinkedList->append(15);
    myLinkedList->append(13);
    myLinkedList->prepend(10);

    myLinkedList->getHead();
    myLinkedList->getTail();
    myLinkedList->getLength();

    std::cout << "\nLinked List:\n";
    myLinkedList->printList();
    std::cout << std::endl;

    myLinkedList->removeLast();
    myLinkedList->removeFirst();

    myLinkedList->getHead();
    myLinkedList->getTail();
    myLinkedList->getLength();


    std::cout << "\nLinked List:\n";
    myLinkedList->printList();
    std::cout << std::endl;

    myLinkedList->insert(3, 45);
    myLinkedList->insert(1, 5);
    myLinkedList->insert(2, 35);

    myLinkedList->getHead();
    myLinkedList->getTail();
    myLinkedList->getLength();

    std::cout << "\nLinked List:\n";
    myLinkedList->printList();
    std::cout << std::endl;

    std::cout << myLinkedList->getNode(5)->value << std::endl;

    myLinkedList->getLength();

    myLinkedList->setNode(1, 83);

    std::cout << "\nLinked List:\n";
    myLinkedList->printList();
    std::cout << std::endl;

    myLinkedList->deleteNode(0);
    std::cout << "Linked List:\n";
    myLinkedList->printList();
    std::cout << std::endl;

    myLinkedList->deleteNode(4);
    std::cout << "Linked List:\n";
    myLinkedList->printList();
    std::cout << std::endl;

    myLinkedList->deleteNode(2);
    std::cout << "Linked List:\n";
    myLinkedList->printList();
    std::cout << std::endl;

    myLinkedList->reverse();

    std::cout << "Linked List:\n";
    myLinkedList->printList();
    std::cout << std::endl;
    
    delete myLinkedList;

    return 0;
}
