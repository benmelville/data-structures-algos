//
// Created by Benjamin Melville on 9/27/24.
//

#ifndef DATA_STRUCTURES_ALGOS_SINGLYLINKEDLISTNODE_H
#define DATA_STRUCTURES_ALGOS_SINGLYLINKEDLISTNODE_H

#include <string>

template<typename T>
class SinglyLinkedListNode
{
public:
    T data;
    SinglyLinkedListNode* next;

    explicit SinglyLinkedListNode(T data) : data(data), next(nullptr) {}

    std::string toString();
};

template<typename T>
std::string SinglyLinkedListNode<T>::toString()
{
    return std::to_string(data);
}

template<>
std::string SinglyLinkedListNode<char>::toString()
{
    return {data};
}


#endif //DATA_STRUCTURES_ALGOS_SINGLYLINKEDLISTNODE_H
