//
// Created by Angel Hernandez on 10/8/24.
//

#ifndef HASHNODE_HPP
#define HASHNODE_HPP


#include <string>
#include <string_view>


class HashNode {
  public:
    std::string key;
    int value;
    HashNode* next;

    explicit HashNode(std::string_view key, const int& value);
};



#endif //HASHNODE_HPP
