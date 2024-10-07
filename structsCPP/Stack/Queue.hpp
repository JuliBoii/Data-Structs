//
// Created by Angel Hernandez on 10/6/24.
//

#ifndef QSTACK_HPP
#define QSTACK_HPP

#include <iostream>
#include "../Node/Node.h"

class Queue {
  Node* first;
  Node* last;
  int size{0};

public:
  Queue();
  explicit Queue(const int& value);
  ~Queue();
  void print() const;
  void enqueue(const int& value);
  int dequeue();
  int getFirst() const;
  int getLast() const;
  int getSize() const;
};



#endif //QSTACK_HPP
