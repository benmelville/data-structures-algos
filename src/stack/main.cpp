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
    myStack.push(78);
    myStack.push(89);
    myStack.print();

    myStack.pop();
    myStack.pop();
    myStack.pop();
    myStack.pop();
    myStack.pop();
    myStack.print();


    std::cout << "stack initial setup" << std::endl;
    return 0;
}