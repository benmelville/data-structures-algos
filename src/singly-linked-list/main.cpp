//
// Created by Benjamin Melville on 9/27/24.
//
#include <iostream>
#include "SinglyLinkedList.h"
#include "Node.h"
int main()
{
    SinglyLinkedList<char> characters;
    characters.addToBack('a');
    characters.addToBack('b');
    characters.addToBack('c');
    characters.addToBack('d');
    characters.addToBack('e');
    characters.addToBack('f');
    characters.addToBack('g');
    characters.addToBack('h');
    characters.addToBack('i');
    characters.addToBack('j');
    characters.addToBack('k');
    std::cout << "The list: " << characters.toString() << std::endl;

    SinglyLinkedList<int> myList;
    myList.addToFront(6);
    myList.addToFront(68);
    myList.addToFront(89);
    myList.addToFront(60);
    myList.addToFront(78);
    myList.addToFront(45);
    std::cout << "The list: " << myList.toString() << std::endl;
    myList.removeFromFront();
    myList.removeFromFront();
    myList.removeFromFront();
    std::cout << "The list: " << myList.toString() << std::endl;
    myList.addToBack(99);
    myList.addToBack(123);
    myList.addToBack(4567);
    myList.addToBack(96879);
    myList.addToBack(7890);
    std::cout << "The list: " << myList.toString() << std::endl;
    myList.removeFromBack();
    myList.removeFromBack();
    myList.removeFromBack();
    myList.removeFromBack();
    std::cout << "The list: " << myList.toString() << std::endl;

}