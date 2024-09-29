//
// Created by Benjamin Melville on 9/27/24.
//

#ifndef DATA_STRUCTURES_ALGOS_DOUBLYLINKEDLIST_H
#define DATA_STRUCTURES_ALGOS_DOUBLYLINKEDLIST_H

#include <iostream>

#include "DoublyLinkedListNode.h"

template<typename T>
class DoublyLinkedList
{
    DoublyLinkedListNode<T>* head;
    DoublyLinkedListNode<T>* tail;

public:

    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    void addToFront(T data)
    {
        auto* newNode = new DoublyLinkedListNode<T>(data);

        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            head->previous = newNode;
            newNode->next = head;
            head = newNode;
        }
    }

    void addToBack(T data)
    {
        auto* newNode = new DoublyLinkedListNode<T>(data);

        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->previous = tail;
            tail->next = newNode;
            tail = newNode;
        }

    }

    void print()
    {
        DoublyLinkedListNode<T>* current = head;
        while (current != nullptr)
        {
            if (current->next == nullptr)
            {
                std::cout << current->data;
            }
            else
            {
                std::cout << current->data << " <-> ";
            }
            current = current->next;
        }
    }
};

#endif //DATA_STRUCTURES_ALGOS_DOUBLYLINKEDLIST_H
