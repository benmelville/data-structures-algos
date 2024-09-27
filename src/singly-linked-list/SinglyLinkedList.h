//
// Created by Benjamin Melville on 9/27/24.
//

#ifndef DATA_STRUCTURES_ALGOS_SINGLYLINKEDLIST_H
#define DATA_STRUCTURES_ALGOS_SINGLYLINKEDLIST_H

#include "Node.h"
//template<typename T>
class SinglyLinkedList
{
    Node* head;

public:
    SinglyLinkedList() : head(nullptr) {}

    std::string toString();

    void addToFront(int data);

};


#endif //DATA_STRUCTURES_ALGOS_SINGLYLINKEDLIST_H
