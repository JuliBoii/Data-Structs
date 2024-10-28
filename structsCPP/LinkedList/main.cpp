#include "LinkedList.h"
#include <string_view>
#include <iostream>

int main() {
    auto* myLinkedList = new LinkedList(4);

    std::cout << "Head: " << myLinkedList->getHead()->value << '\n';
    std::cout << "Tail: " << myLinkedList->getTail()->value << '\n';
    std::cout << "Length: " << myLinkedList->getLength() << '\n';

    std::cout << "Printing List...\n";
    myLinkedList->printList();

    std::cout << "\n\nAppending 3 new nodes to list...\n";
    myLinkedList->append(5);
    myLinkedList->append(15);
    myLinkedList->append(13);

    std::cout << "Prepending a node to list...\n";
    myLinkedList->prepend(10);

    std::cout << "Head: " << myLinkedList->getHead()->value << '\n';
    std::cout << "Tail: " << myLinkedList->getTail()->value << '\n';
    std::cout << "Length: " << myLinkedList->getLength() << '\n';

    std::cout << "Printing List...\n";
    myLinkedList->printList();

    std::cout << "\n\nRemoving a node from the end of list...\n";
    myLinkedList->removeLast();
    std::cout << "Removing a node from the beginning of list...\n";
    myLinkedList->removeFirst();

    std::cout << "Head: " << myLinkedList->getHead()->value << '\n';
    std::cout << "Tail: " << myLinkedList->getTail()->value << '\n';
    std::cout << "Length: " << myLinkedList->getLength() << '\n';

    std::cout << "Printing List...\n";
    myLinkedList->printList();

    std::cout << "\n\nInserting 3 new nodes...\n";

    std::string_view result = myLinkedList->insert(3, 45) ? "True" : "False";
    std::cout << "Insert at index '3' successful? " << result << '\n';

    result = myLinkedList->insert(1, 5) ? "True" : "False";
    std::cout << "Insert at index '1' successful? " << result << '\n';

    result = myLinkedList->insert(6, 35) ? "True" : "False";
    std::cout << "Insert at index '6' successful? " << result << '\n';

    std::cout << "Head: " << myLinkedList->getHead()->value << '\n';
    std::cout << "Tail: " << myLinkedList->getTail()->value << '\n';
    std::cout << "Length: " << myLinkedList->getLength() << '\n';

    std::cout << "Printing List...\n";
    myLinkedList->printList();

    std::cout << "\n\nRetrieving node at index '3': " << myLinkedList->getNode(3)->value << '\n';

    std::cout << "Changing the value for index '1': ";
    result = myLinkedList->setNode(1, 83) ? "True" : "False";
    std::cout << result << '\n';
    std::cout << "Node at the middle of List is: " << myLinkedList->middle()->value << std::endl;

    std::cout << "Printing List...\n";
    myLinkedList->printList();

    std::cout << "\n\nReversing the list...\n";
    myLinkedList->reverse();

    std::cout << "Printing List...\n";
    myLinkedList->printList();

    std::cout << "\n\nDeleting a node at index '4':\n";
    myLinkedList->deleteNode(4);
    std::cout << "Printing List...\n";
    myLinkedList->printList();

    std::cout << "\n\nDeleting a node at index '0':\n";
    myLinkedList->deleteNode(0);
    std::cout << "Printing List...\n";
    myLinkedList->printList();

    std::cout << "\n\nDeleting a node at index '2':\n";
    myLinkedList->deleteNode(2);
    std::cout << "Printing List...\n";
    myLinkedList->printList();

    delete myLinkedList;

    return 0;
}
