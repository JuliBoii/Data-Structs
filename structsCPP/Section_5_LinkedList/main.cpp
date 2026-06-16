#include <print>
#include <memory>

import LinkedList;

int main() {
    std::unique_ptr<LinkedList> myList = std::make_unique<LinkedList>(4);

    // myList->removeLast();

    myList->append(13);

    myList->printHead();
    myList->printTail();
    myList->printLength();
    myList->print();

    myList->removeTail();
    myList->printHead();
    myList->printTail();
    myList->printLength();
    myList->print();

    myList->removeTail();
    myList->printHead();
    myList->printTail();
    myList->printLength();
    myList->print();

    myList->prepend(31);
    myList->printHead();
    myList->printTail();
    myList->printLength();
    myList->print();

    myList->prepend(32);
    myList->prepend(14);
    myList->printHead();
    myList->printTail();
    myList->printLength();
    myList->print();

    myList->removeHead();
    myList->printHead();
    myList->printTail();
    myList->printLength();
    myList->print();

    // myList->removeHead();
    // myList->printHead();
    // myList->printTail();
    // myList->printLength();
    // myList->print();
    //
    // myList->removeHead();
    // myList->printHead();
    // myList->printTail();
    // myList->printLength();
    // myList->print();

    return 0;
}
