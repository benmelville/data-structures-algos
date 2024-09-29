//
// Created by Benjamin Melville on 9/27/24.
//

#ifndef DATA_STRUCTURES_ALGOS_SINGLYLINKEDLIST_H
#define DATA_STRUCTURES_ALGOS_SINGLYLINKEDLIST_H

#include "SinglyLinkedListNode.h"
template<typename T>
class SinglyLinkedList
{
    SinglyLinkedListNode<T>* head;

public:
    SinglyLinkedList() : head(nullptr) {}

    ~SinglyLinkedList()
    {
        SinglyLinkedListNode<T>* current = head;
        while (current != nullptr)
        {
            SinglyLinkedListNode<T>* nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }

    void addToFront(T data)
    {
        SinglyLinkedListNode<T>* newNode = new SinglyLinkedListNode(data);
        newNode->next = head;
        head = newNode;
    }

std::string toString()
{
    std::string answer;
    SinglyLinkedListNode<T>* current = head;
    while (current != nullptr)
    {
        if (current->next == nullptr)
        {
            answer += current->toString();
            return answer;
        }
        else
        {
            answer += current->toString() + " -> ";
            current = current->next;
        }
    }
    return answer;
}

    void addToBack(T data)
    {
        if (head == nullptr)
        {
            head = new SinglyLinkedListNode(data);
        }
        else
        {
            SinglyLinkedListNode<T>* current = head;
            while(current->next != nullptr)
            {
                current = current->next;
            }
            current->next = new SinglyLinkedListNode(data);
        }
    }

    void removeFromFront()
    {
        if (head == nullptr) { return; }

        SinglyLinkedListNode<T>* temp = head;
        head = head->next;
        delete temp;
    }

    void removeFromBack()
    {
        if (head == nullptr)
        {
            return;
        }
        else if (head->next == nullptr)
        {
            delete head;
            head = nullptr;
        }

        else
        {
            SinglyLinkedListNode<T>* current = head;

            while(current->next->next != nullptr)
            {
                current = current->next;
            }

            delete current->next;
            current->next = nullptr;
        }

    }

    SinglyLinkedListNode<T>* getHead() const
    {
        return head;
    }

};


#endif //DATA_STRUCTURES_ALGOS_SINGLYLINKEDLIST_H
