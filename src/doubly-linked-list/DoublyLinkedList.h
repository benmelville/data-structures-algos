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

    ~DoublyLinkedList()
    {
        auto* current = head;
        while (current != nullptr)
        {
            auto* nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }

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

    void removeFromFront()
    {
        if (head == nullptr)
        {
            return;
        }
        else if (head->next == nullptr)
        {
            tail = nullptr;
            delete head;
        }
        else
        {
            auto* temp = head;
            head = head->next;
            head->previous = nullptr;
            delete temp;
        }
    }

    void removeFromBack()
    {
        if (head == nullptr) { return; }

        auto* temp = tail;
        tail = tail->previous;
        tail->next = nullptr;
        delete temp;
    }

    void print()
    {
        DoublyLinkedListNode<T>* current = head;
        while (current != nullptr)
        {
            if (current->next == nullptr)
            {
                std::cout << current->toString();
            }
            else
            {
                std::cout << current->toString() << " <-> ";
            }
            current = current->next;
        }
        std::cout << "\n";
    }
};

#endif //DATA_STRUCTURES_ALGOS_DOUBLYLINKEDLIST_H
