//
// Created by Angel Hernandez on 10/8/24.
//

#include "HashNode.hpp"


HashNode::HashNode(std::string_view key, const int& value) {
  this->key = key;
  this->value = value;
  this->next = nullptr;
}