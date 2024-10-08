//
// Created by Angel Hernandez on 10/7/24.
//

#ifndef BINARYSEARCHTREE_HPP
#define BINARYSEARCHTREE_HPP


#include "../Node/TreeNode.hpp"

class BinarySearchTree {
    TreeNode* root;
public:
    BinarySearchTree();
    explicit BinarySearchTree(const int& value);
    // ~BinarySearchTree();
    bool insert(const int& value);
    bool contains(const int& value) const;
};



#endif //BINARYSEARCHTREE_HPP
