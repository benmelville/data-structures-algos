//
// Created by Benjamin Melville on 9/27/24.
//

#ifndef DATA_STRUCTURES_ALGOS_NODE_H
#define DATA_STRUCTURES_ALGOS_NODE_H

#include <string>

template<typename T>
class Node
{
public:
    T data;
    Node* next;

    explicit Node(T data) : data(data), next(nullptr) {}

    std::string toString();
};

template<typename T>
std::string Node<T>::toString()
{
    return std::to_string(data);
}

template<>
std::string Node<char>::toString()
{
    return {data};
}


#endif //DATA_STRUCTURES_ALGOS_NODE_H
