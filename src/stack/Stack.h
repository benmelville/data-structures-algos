//
// Created by Benjamin Melville on 9/30/24.
//

#ifndef DATA_STRUCTURES_ALGOS_STACK_H
#define DATA_STRUCTURES_ALGOS_STACK_H

#include "SinglyLinkedList.h"

template<typename T>
class Stack
{
    SinglyLinkedList<T> stack;

public:

    void push(T data)
    {
        stack.addToFront(data);
    }

    T pop()
    {
        return stack.removeFromFront();
    }

    T peek()
    {
        return stack->head->data;
    }

    bool isEmpty()
    {
        return stack.getHead();
    }

    void clear()
    {
        stack.clear();
    }

    void print()
    {
        std::cout << stack.toString() << std::endl;
    }

};

#endif //DATA_STRUCTURES_ALGOS_STACK_H
