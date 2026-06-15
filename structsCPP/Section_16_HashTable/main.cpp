//
// Created by Angel Hernandez on 10/8/24.
//

#include <vector>
#include <string>
#include "HashTable.hpp"

int main() {
    HashTable* ht = new HashTable();

    ht->set("nail", 200);
    ht->set("tail", 410);
    ht->set("trail", 800);
    ht->set("rail", 630);
    ht->set("mail", 410);
    ht->set("peanuts", 510);
    ht->print();

    std::cout << "\nValue for key \"mail\" is: " << ht->get("mail") << '\n';
    std::cout << "Value for key \"bolts\" is: " << ht->get("bolts") << "\n\n";

    std::vector<std::string> myKeys = ht->getAllKeys();

    for (const auto& key : myKeys) {
        std::cout << key << ' ';
    }

    return 0;
}