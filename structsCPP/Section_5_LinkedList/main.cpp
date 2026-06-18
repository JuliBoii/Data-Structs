#include <print>
#include <memory>

import LinkedList;

int main() {
    std::unique_ptr<LinkedList> myList = std::make_unique<LinkedList>(4);

    // myList->removeLast();
    std::println("Appending a node");
    myList->append(13);
    myList->printHead();
    myList->printTail();
    myList->printLength();
    myList->print();

    std::println("Removing a node from end");
    myList->removeTail();
    myList->printHead();
    myList->printTail();
    myList->printLength();
    myList->print();

    std::println("Removing a node from end");
    myList->removeTail();
    myList->printHead();
    myList->printTail();
    myList->printLength();
    myList->print();

    std::println("Adding node to front");
    myList->prepend(31);
    myList->printHead();
    myList->printTail();
    myList->printLength();
    myList->print();

    std::println("Adding two nodes to front");
    myList->prepend(32);
    myList->prepend(14);
    myList->printHead();
    myList->printTail();
    myList->printLength();
    myList->print();

    std::println("Removing node from front");
    myList->removeHead();
    myList->printHead();
    myList->printTail();
    myList->printLength();
    myList->print();

    std::println("Removing node from front");
    myList->removeHead();
    myList->printHead();
    myList->printTail();
    myList->printLength();
    myList->print();

    std::println("Removing node from front");
    myList->removeHead();
    myList->printHead();
    myList->printTail();
    myList->printLength();
    myList->print();

    std::println("Appending three nodes");
    myList->append(421);
    myList->append(42);
    myList->append(4);
    myList->printHead();
    myList->printTail();
    myList->printLength();
    myList->print();

    std::println("Inserting two nodes");
    std::println("Successful Insertion? {}", myList->insert(3, 41));
    std::println("Successful Insertion? {}", myList->insert(8, 41));
    myList->printHead();
    myList->printTail();
    myList->printLength();
    myList->print();

    std::println("Updating a node value");
    std::println("Update Successful? {}", myList->setNode(1, 93));
    myList->printHead();
    myList->printTail();
    myList->printLength();
    myList->print();

    std::println("Reversing Order of List");
    myList->reverse();
    myList->printHead();
    myList->printTail();
    myList->printLength();
    myList->print();

    std::println("Removing a node at index 0");
    myList->removeNode(0);
    myList->printHead();
    myList->printTail();
    myList->printLength();
    myList->print();

    std::println("Removing a node at index 2");
    myList->removeNode(2);
    myList->printHead();
    myList->printTail();
    myList->printLength();
    myList->print();

    return 0;
}
