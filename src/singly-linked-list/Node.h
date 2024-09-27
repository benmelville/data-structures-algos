//
// Created by Benjamin Melville on 9/27/24.
//

#ifndef DATA_STRUCTURES_ALGOS_NODE_H
#define DATA_STRUCTURES_ALGOS_NODE_H

//template<typename T>
class Node
{
    int data;
    Node* next;
public:
    Node(int data, Node* next) : data(data), next(next) {}
};


#endif //DATA_STRUCTURES_ALGOS_NODE_H
