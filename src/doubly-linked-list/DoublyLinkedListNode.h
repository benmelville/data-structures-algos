//
// Created by Benjamin Melville on 9/27/24.
//

#ifndef DATA_STRUCTURES_ALGOS_NODE_H
#define DATA_STRUCTURES_ALGOS_NODE_H

#include <string>

template <typename T>
class DoublyLinkedListNode
{
public:
    T data;
    DoublyLinkedListNode<T> *next;
    DoublyLinkedListNode<T> *previous;

public:
    DoublyLinkedListNode(T data) : data(data), next(nullptr), previous(nullptr) {}

    std::string toString();
    T getData();
};

template <typename T>
std::string DoublyLinkedListNode<T>::toString()
{
    return std::to_string(data);
}

template <>
std::string DoublyLinkedListNode<char>::toString()
{
    return {data};
}

template <typename T>
T DoublyLinkedListNode<T>::getData()
{
    return data;
}

#endif // DATA_STRUCTURES_ALGOS_NODE_H
