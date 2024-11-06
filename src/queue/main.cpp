//
// Created by Benjamin Melville on 10/1/24.
//
#include <iostream>
#include "Queue.h"

int main()
{
    std::cout << "initial setup of queue!" << std::endl;
    Queue<int> queue;
    queue.enqueue(6);
    queue.enqueue(56);
    queue.enqueue(78);
    queue.enqueue(90);
    queue.enqueue(56);
    queue.printQueue();

    std::cout << queue.size() << std::endl;

}