//
// Created by Angel Hernandez on 10/4/24.
//

#include <iostream>
#include "DLinkedList.hpp"

int main() {
  DLinkedList* myDLL = new DLinkedList(7);
  myDLL->append(2);
  myDLL->printList();



  delete myDLL;
  return 0;
}