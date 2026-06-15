//
// Created by Angel Hernandez on 10/7/24.
//

#ifndef BINARYSEARCHTREE_HPP
#define BINARYSEARCHTREE_HPP


#include "../Node/TreeNode.hpp"

#include <iostream>

class BinarySearchTree {
    TreeNode* root;
public:
    BinarySearchTree();

    explicit BinarySearchTree(const int& value);

     ~BinarySearchTree();

    bool insert(const int& value);

    bool contains(const int& value) const;

    void deleteNode(const TreeNode* currentNode);

    void print(const TreeNode* currentNode) const;

    TreeNode* getRoot() const;
};



#endif //BINARYSEARCHTREE_HPP
