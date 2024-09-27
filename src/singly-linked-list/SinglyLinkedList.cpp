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
        if (current->next->next == nullptr)
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