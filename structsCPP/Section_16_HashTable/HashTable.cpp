//
// Created by Angel Hernandez on 10/8/24.
//

#include "HashTable.hpp"


void HashTable::print() const {
    for (auto i = 1; i < SIZE; i++) {
        std::cout << i << ": ";
        if (dataTable[i]) {
            HashNode* temp = dataTable[i];
            while (temp) {
                std::cout << "{" << temp->key.c_str() << "," << temp->value << "}, ";
                temp = temp->next;
            }
        }
        std::cout << '\n';
    }
}

int HashTable::hashFunction(std::string_view key) {
    int hash{0};
    for (int i = 0; i < key.length(); i++) {
        int asciiValue{static_cast<int>(key[i])};
        hash = (hash * 31 + asciiValue) % SIZE;
    }
    return hash;
}

void HashTable::set(std::string_view key, const int& value) {
    int index = hashFunction(key);
    HashNode* newNode = new HashNode(key, value);
    if (!dataTable[index]) {
        dataTable[index] = newNode;
    } else {
        HashNode* temp = dataTable[index];
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

int HashTable::get(std::string_view key) {
    int index{hashFunction(key)};
    HashNode* temp = dataTable[index];
    while (temp) {
        if (temp->key == key) {
            return temp->value;
        }
        temp = temp->next;
    }
    return 0;
}

std::vector<std::string> HashTable::getAllKeys() const {
    std::vector<std::string> allKeys;
    for (auto i = 0; i < SIZE; i++) {
        HashNode* temp = dataTable[i];
        while (temp) {
            allKeys.push_back(temp->key);
            temp = temp->next;
        }
    }
    return allKeys;
}
