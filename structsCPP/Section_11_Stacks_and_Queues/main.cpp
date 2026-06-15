//
// Created by Angel Hernandez on 10/6/24.
//
#include <iostream>

#include "Queue.hpp"
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

    delete myStack;

    std::cout << "\n\n";

    Queue* myQueue = new Queue(38);

    myQueue->enqueue(42);
    myQueue->enqueue(2);

    std::cout << "Printing first in queue: " << myQueue->getFirst() << '\n';
    std::cout << "Printing last in queue: " << myQueue->getLast() << '\n';
    std::cout << "Size of Queue: " << myQueue->getSize() << '\n';

    std::cout << "Printing queue:\n";
    myQueue->print();
    std::cout << '\n';

    std::cout << "Dequeued element: " << myQueue->dequeue() << '\n';
    std::cout << "Dequeued element: " << myQueue->dequeue() << '\n';
    std::cout << "Dequeued element: " << myQueue->dequeue() << '\n';
    std::cout << "Dequeued element: " << myQueue->dequeue() << '\n';
    myQueue->enqueue(-32);
    myQueue->enqueue(71392);

    return 0;
}
