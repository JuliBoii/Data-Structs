//
// Created by Angel Hernandez on 10/7/24.
//

#include <iostream>
#include "BinarySearchTree.hpp"

int main() {
    BinarySearchTree* myBST = new BinarySearchTree();

    myBST->insert(10);
    myBST->insert(93);
    myBST->insert(34);
    myBST->insert(-4);
    myBST->insert(73);
    myBST->insert(13);

    std::cout << "Does this tree contain -52: " << myBST->contains(-52) << '\n';
    std::cout << "Does this tree contain 73: " << myBST->contains(73) << '\n';

    return 0;
}