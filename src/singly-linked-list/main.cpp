//
// Created by Benjamin Melville on 9/27/24.
//
#include <iostream>
#include "SinglyLinkedList.h"
#include "Node.h"
int main()
{
    SinglyLinkedList myList;
    myList.addToFront(6);
    myList.addToFront(68);
    myList.addToFront(89);
    myList.addToFront(60);
    myList.addToFront(78);
    myList.addToFront(45);

    std::cout << "The list: " << myList.toString() << std::endl;

    std::cout << "singly linked list class has entered the chat" << std::endl;
}