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

    void clear()
    {
        ~SinglyLinkedList();
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

    T removeFromFront()
    {
        if (head == nullptr) { return T(); }

        SinglyLinkedListNode<T>* temp = head;
        head = head->next;
        T data = temp->data;
        delete temp;
        return data;
    }

    T removeFromBack()
    {
        T data;
        if (head == nullptr)
        {
            return T();
        }
        else if (head->next == nullptr)
        {
            data = head->data;
            delete head;
            head = nullptr;
            return data;
        }

        else
        {
            SinglyLinkedListNode<T>* current = head;

            while(current->next->next != nullptr)
            {
                current = current->next;
            }
            data = current->next->data;
            delete current->next;
            current->next = nullptr;
            return data;
        }

    }

    SinglyLinkedListNode<T>* getHead() const
    {
        return head;
    }

};


#endif //DATA_STRUCTURES_ALGOS_SINGLYLINKEDLIST_H
