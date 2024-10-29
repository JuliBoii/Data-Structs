//
// Created by Angel Hernandez on 10/4/24.
//

#include <iostream>
#include <string_view>
#include "DLinkedList.hpp"

int main() {
  DLinkedList* myDLL = new DLinkedList(7);

  std::cout << "Head: " << myDLL->getHead()->value << '\n';
  std::cout << "Tail: " << myDLL->getTail()->value << '\n';
  std::cout << "Length: " << myDLL->getLength() << '\n';

  std::cout << "Printing List...\n";
  myDLL->printList();

  std::cout << "\nAppending 3 new nodes to list...\n";
  myDLL->append(2);
  myDLL->append(82);
  myDLL->append(32);

  std::cout << "Prepending a node to list...\n\n";
  myDLL->prepend(10);

  std::cout << "Head: " << myDLL->getHead()->value << '\n';
  std::cout << "Tail: " << myDLL->getTail()->value << '\n';
  std::cout << "Length: " << myDLL->getLength() << '\n';
  std::cout << "Printing List...\n";
  myDLL->printList();

  std::cout << "\nRemoving a node from the end of list...\n";
  myDLL->deleteLast();
  std::cout << "Removing a node from the beginning of list...\n";
  myDLL->deleteFirst();
  std::cout << '\n';

  std::cout << "Head: " << myDLL->getHead()->value << '\n';
  std::cout << "Tail: " << myDLL->getTail()->value << '\n';
  std::cout << "Length: " << myDLL->getLength() << '\n';
  std::cout << "Printing List...\n";
  myDLL->printList();

  std::cout << "\nInserting 3 new nodes...\n";
  std::string_view result = myDLL->insert(2, 45) ? "True" : "False";
  std::cout << "Insert at index '2' successful? " << result << '\n';

  result = myDLL->insert(6, 2) ? "True" : "False";
  std::cout << "Insert at index '6' successful? " << result << '\n';

  result = myDLL->insert(3, 9) ? "True" : "False";
  std::cout << "Insert at index '3' successful? " << result << "\n\n";

  std::cout << "Head: " << myDLL->getHead()->value << '\n';
  std::cout << "Tail: " << myDLL->getTail()->value << '\n';
  std::cout << "Length: " << myDLL->getLength() << '\n';
  std::cout << "Printing List...\n";
  myDLL->printList();

  std::cout << "\nRetrieving node at index '2': " << myDLL->getNode(2)->value << '\n';
  std::cout << "Changing the value for index '3': ";
  result = myDLL->setNode(3, -3) ? "True" : "False";
  std::cout << result << "\n\n";

  std::cout << "Head: " << myDLL->getHead()->value << '\n';
  std::cout << "Tail: " << myDLL->getTail()->value << '\n';
  std::cout << "Length: " << myDLL->getLength() << '\n';
  std::cout << "Printing List...\n";
  myDLL->printList();

  delete myDLL;

  return 0;
}