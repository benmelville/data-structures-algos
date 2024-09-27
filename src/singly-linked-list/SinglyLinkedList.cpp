//
// Created by Benjamin Melville on 9/27/24.
//
#include "SinglyLinkedList.h"
#include <iostream>

//template<typename T>
void SinglyLinkedList::addToFront(int data)
{
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    std::cout << "added " << data << " to the front of the list!" << std::endl;
}

std::string SinglyLinkedList::toString()
{
    std::string answer;
    Node* current = head;
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

void SinglyLinkedList::addToBack(int data)
{
    if (head == nullptr)
    {
        head = new Node(data);
    }
    else
    {
        Node* current = head;
        while(current->next != nullptr)
        {
            current = current->next;
        }
        current->next = new Node(data);
    }
}


void SinglyLinkedList::removeFromFront()
{
    if (head == nullptr) { return; }

    Node* temp = head;
    head = head->next;
    delete temp;
}

void SinglyLinkedList::removeFromBack()
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
        Node* current = head;

        while(current->next->next != nullptr)
        {
            current = current->next;
        }

        delete current->next;
        current->next = nullptr;
    }

}

Node* SinglyLinkedList::getHead() const
{
    return head;
}



