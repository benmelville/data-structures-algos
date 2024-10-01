//
// Created by Benjamin Melville on 9/29/24.
//
#include <iostream>
#include "Stack.h"

int main()
{
    Stack<int> myStack;

    myStack.push(5);
    myStack.push(12);
    myStack.push(23);
    myStack.push(1);
    std::cout << "peek: " << myStack.peek() << std::endl;
    myStack.push(78);
    myStack.push(89);
    myStack.print();

    myStack.pop();
    myStack.print();
    myStack.pop();
    myStack.print();
    myStack.pop();
    myStack.print();
    myStack.pop();

    std::cout << "is empty: " << myStack.isEmpty() << std::endl;

    myStack.pop();
    myStack.print();
    myStack.push(89);
    myStack.push(89);
    myStack.push(89);
    myStack.push(89);

    myStack.clear();

    std::cout << "is empty after clear: " << myStack.isEmpty() << std::endl;
    return 0;
}