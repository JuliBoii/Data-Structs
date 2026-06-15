//
// Created by Angel Hernandez on 10/8/24.
//

#ifndef HASHTABLE_HPP
#define HASHTABLE_HPP


#include <iostream>
#include <vector>
#include <string_view>
#include "../Node/HashNode.hpp"


class HashTable {
    static constexpr int SIZE = 7;
    HashNode* dataTable[SIZE] = {};

public:
    void print() const;
    int hashFunction(std::string_view key);
    void set(std::string_view key, const int& value);
    int get(std::string_view key);
    std::vector<std::string> getAllKeys() const;
};


#endif //HASHTABLE_HPP
