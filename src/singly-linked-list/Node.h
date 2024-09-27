//
// Created by Benjamin Melville on 9/27/24.
//

#ifndef DATA_STRUCTURES_ALGOS_NODE_H
#define DATA_STRUCTURES_ALGOS_NODE_H

#include <string>

//template<typename T>
class Node
{
public:
    int data;
    Node* next;

    Node() : data(0), next(nullptr) {}

    Node(int data) : data(data), next(nullptr) {}

    std::string toString()
    {
        return std::to_string(data);
    }
};


#endif //DATA_STRUCTURES_ALGOS_NODE_H
