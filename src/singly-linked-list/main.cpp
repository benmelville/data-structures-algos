//
// Created by Benjamin Melville on 9/27/24.
//
#include <iostream>
#include "SinglyLinkedList.h"
#include "Node.h"
int main()
{
    Node test(4, nullptr);
    SinglyLinkedList myList(test);
    myList.addToFront(6);

    std::cout << "singly linked list class has entered the chat" << std::endl;
}