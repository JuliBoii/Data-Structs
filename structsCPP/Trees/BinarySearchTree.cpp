//
// Created by Angel Hernandez on 10/7/24.
//

#include "BinarySearchTree.hpp"


BinarySearchTree::BinarySearchTree() {
    this->root = nullptr;
}

BinarySearchTree::BinarySearchTree(const int &value) {
    TreeNode* newNode = new TreeNode(value);
    root = newNode;
}

// BinarySearchTree::~BinarySearchTree() {
//     TreeNode* temp = root;
//     while (temp) {
//
//     }
// }


bool BinarySearchTree::insert(const int &value) {
    TreeNode* newNode = new TreeNode(value);
    if (root == nullptr) {
        root = newNode;
        return true;
    }

    TreeNode* temp = root;
    while (temp) {
        if (newNode->value == temp->value) {
            return false;
        }
        if (newNode->value < temp->value) {
            if (!temp->left) {
                temp->left = newNode;
                return true;
            }
            temp = temp->left;
        }
        else {
            if (!temp->right) {
                temp->right = newNode;
                return true;
            }
            temp = temp->right;
        }
    }
    return false;
}

bool BinarySearchTree::contains(const int &value) const {
    TreeNode* temp = root;
    while (temp) {
        if (value < temp->value) {
            temp = temp->left;
        } else if (value > temp->value) {
            temp = temp->right;
        } else {
            return true;
        }
    }
    return false;
}

