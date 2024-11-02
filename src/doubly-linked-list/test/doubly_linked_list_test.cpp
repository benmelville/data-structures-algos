//
// Created by Benjamin Melville on 9/27/24.
//
#include "DoublyLinkedList.h"
#include <gtest/gtest.h>
#include <vector>
#include <iostream>

TEST(DoublyLinkedListTest, SanityCheck)
{
    ASSERT_TRUE(true);
}

TEST(DoublyLinkedListTest, addToFront)
{
    DoublyLinkedList<int> testList;

    std::vector<int> testVector = {
        69, 3, 12, 89, 67, 34, 4};

    // add elements to test list
    testList.addToFront(4);
    testList.addToFront(34);
    testList.addToFront(67);
    testList.addToFront(89);
    testList.addToFront(12);
    testList.addToFront(3);
    testList.addToFront(69);

    testList.getHead();

    DoublyLinkedListNode<int>* current = testList.getHead();
    u_int16_t i = 0;
    while(current != nullptr)
    {
        ASSERT_EQ(current->getData(), testVector[i]);
        i++;
        current = current->next;
    }

}