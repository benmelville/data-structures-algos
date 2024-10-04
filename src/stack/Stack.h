//
// Created by Benjamin Melville on 9/30/24.
//

#ifndef DATA_STRUCTURES_ALGOS_STACK_H
#define DATA_STRUCTURES_ALGOS_STACK_H

#include "SinglyLinkedList.h"
#include <iostream>

template<typename T>
class Stack
{
    SinglyLinkedList<T> stack;
    u_int64_t size;

public:

    Stack() : size(0) {}

    ~Stack() = default;

    void push(T data)
    {
        stack.addToFront(data);
        size++;
    }

    T pop()
    {
        size < 1 ? size = 0 : size--;
        return stack.removeFromFront();
    }

    T peek()
    {
        return stack.getHead() == nullptr ? T() : stack.getHead()->data;
    }

    bool isEmpty()
    {
        return size < 1;
    }

    uint64_t getSize() { return size; }

    void clear()
    {
        stack.clear();
        size = 0;
    }

    void print()
    {
        std::cout << "----TOP OF STACK----" << std::endl;

        SinglyLinkedListNode<T>* current = stack.getHead();

        while (current != nullptr)
        {
            std::cout << current->data << std::endl;
            current = current->next;
        }

        std::cout << "----BOTTOM OF STACK----\n" << std::endl;
    }

};

#endif //DATA_STRUCTURES_ALGOS_STACK_H
