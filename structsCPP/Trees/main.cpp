//
// Created by Angel Hernandez on 10/7/24.
//

#include <iostream>
#include <string_view>
#include "BinarySearchTree.hpp"

int main() {
    BinarySearchTree* myBST = new BinarySearchTree();

    std::cout << "Inserting 6 Nodes into empty BST...\n\n";
    myBST->insert(10);
    myBST->insert(93);
    myBST->insert(34);
    myBST->insert(-4);
    myBST->insert(73);
    myBST->insert(13);

    std::string_view result = myBST->contains(-52) ? "True" : "False";
    std::cout << "Does this tree contain -52: " << result << '\n';

    result = myBST->contains(73) ? "True" : "False";
    std::cout << "Does this tree contain 73: " << result  << '\n';

    std::cout << "\nPrinting BST...\n";
    myBST->print(myBST->getRoot());

    delete myBST;
    
    return 0;
}