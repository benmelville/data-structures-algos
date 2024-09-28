//
// Created by Benjamin Melville on 9/27/24.
//

#ifndef DATA_STRUCTURES_ALGOS_DOUBLYLINKEDLIST_H
#define DATA_STRUCTURES_ALGOS_DOUBLYLINKEDLIST_H

#include "DoublyLinkedListNode.h"

template<typename T>
class DoublyLinkedList
{
    DoublyLinkedListNode<T>* head;
    DoublyLinkedListNode<T>* tail;
};

#endif //DATA_STRUCTURES_ALGOS_DOUBLYLINKEDLIST_H
