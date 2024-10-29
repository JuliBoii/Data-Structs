//
// Created by Angel Hernandez on 10/4/24.
//

#ifndef NODED_HPP
#define NODED_HPP



class Node_D {
public:
    int value;
    Node_D* next;
    Node_D* prev;

    explicit Node_D(const int& value);
};

#endif //NODED_HPP
