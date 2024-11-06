//
// Created by Benjamin Melville on 10/1/24.
//

#ifndef DATA_STRUCTURES_ALGOS_QUEUE_H
#define DATA_STRUCTURES_ALGOS_QUEUE_H

#include "SinglyLinkedList.h"
#include <iostream>
template <typename T>
class Queue
{
    SinglyLinkedList<T> queue;

public:
    void enqueue(T data)
    {
        queue.addToFront(data);
    }

    T dequeue()
    {
        return queue.removeFromBack();
    }

    T peek()
    {
        return queue.getTail();
    }

    bool isEmpty()
    {
        return queue.getHead() == nullptr;
    }

    uint32_t size()
    {
        return queue.getSize();
    }

    void printQueue()
    {
        std::cout << queue.toString() << std::endl;
    }
};

#endif // DATA_STRUCTURES_ALGOS_QUEUE_H