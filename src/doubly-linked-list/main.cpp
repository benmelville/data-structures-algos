//
// Created by Benjamin Melville on 9/27/24.
//

#include "DoublyLinkedList.h"
#include <iostream>

int main()
{
    std::cout << "initial setup for doubly linked list." << std::endl;

    DoublyLinkedList<int> myList;

    myList.addToFront(5);
    myList.addToFront(6);
    myList.print();

    myList.addToBack(9);
    myList.addToBack(12);
    myList.addToBack(45);
    myList.print();

    myList.removeFromFront();
    myList.removeFromFront();
    myList.removeFromFront();
    myList.print();

    myList.addToBack(13);
    myList.addToBack(23);
    myList.addToBack(67);
    myList.print();

    myList.removeFromBack();
    myList.removeFromBack();
    myList.removeFromBack();
    myList.print();

    return 0;
}