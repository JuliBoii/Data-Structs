//
// Created by Angel Hernandez on 10/6/24.
//
#include <iostream>

#include "Stack.hpp"

int main() {
    Stack* myStack = new Stack(7);

    myStack->push(14);

    std::cout << "Printing stack elements:\n";
    myStack->print();
    std::cout << '\n';
    std::cout << "Top of Stack: " << myStack->getTop() << '\n';
    std::cout << "Size of Stack: " << myStack->getSize() << '\n';

    std::cout << "Popped element: " << myStack->pop() << '\n';
    std::cout << "Popped element: " << myStack->pop() << '\n';
    std::cout << "Popped element: " << myStack->pop() << '\n';

    return 0;
}
