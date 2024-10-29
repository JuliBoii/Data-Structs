//
// Created by Angel Hernandez on 10/7/24.
//

#include "BinarySearchTree.hpp"


BinarySearchTree::BinarySearchTree() {
    this->root = nullptr;
}

BinarySearchTree::BinarySearchTree(const int &value) {
    TreeNode* newNode = new TreeNode(value);
    this->root = newNode;
}

 BinarySearchTree::~BinarySearchTree() {
     this->deleteNode(this->root);
 }

bool BinarySearchTree::insert(const int& value) {
    TreeNode* newNode = new TreeNode(value);

    if (this->root == nullptr) {
        this->root = newNode;
        return true;
    }

    TreeNode* temp = this->root;
    while (temp) {
        if (newNode->value == temp->value) {
            return false;
        }
        else if (newNode->value < temp->value) {
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
    if (this->root == nullptr) { return false; }

    TreeNode* temp = this->root;
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

void BinarySearchTree::deleteNode(const TreeNode* currentNode) {
    if (currentNode == nullptr) { return; }
    this->deleteNode(currentNode->left);
    this->deleteNode(currentNode->right);
    delete currentNode;
}
