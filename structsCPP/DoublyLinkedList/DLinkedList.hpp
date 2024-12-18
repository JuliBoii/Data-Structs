//
// Created by Angel Hernandez on 10/4/24.
//

#ifndef DLINKEDLIST_HPP
#define DLINKEDLIST_HPP

#include "../Node/NodeD.hpp"

class DLinkedList {
  int length{0};
  Node_D *head;
  Node_D *tail;

public:
  DLinkedList();

  explicit DLinkedList(const int& value);

  ~DLinkedList();

  void prepend(const int& value);

  void append(const int& value);

  bool insert(const int& index, const int& value);

  bool setNode(const int& index, const int& value);

  void deleteFirst();

  void deleteLast();

  void deleteNode(const int& index);

  void printList() const;

  Node_D *getNode(const int& index) const;

  int getLength() const;

  Node_D* getHead() const;

  Node_D* getTail() const;
};



#endif //DLINKEDLIST_HPP
