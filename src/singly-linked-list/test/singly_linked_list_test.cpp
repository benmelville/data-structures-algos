//
// Created by Benjamin Melville on 9/27/24.
//

#include <vector>
#include <gtest/gtest.h>
#include "SinglyLinkedList.h"

TEST(SinglyLinkedListTest, sanityCheck)
{
    ASSERT_EQ(1, 1);
}

TEST(SinglyLinkedListTest, AddToFront)
{
    std::vector<int> expectedValues;
    expectedValues.push_back(45);
    expectedValues.push_back(78);
    expectedValues.push_back(60);
    expectedValues.push_back(89);
    expectedValues.push_back(68);
    expectedValues.push_back(6);

    SinglyLinkedList myList;
    myList.addToFront(6);
    myList.addToFront(68);
    myList.addToFront(89);
    myList.addToFront(60);
    myList.addToFront(78);
    myList.addToFront(45);

    ASSERT_EQ(myList.getHead()->data, 45);

    Node* current = myList.getHead();
    int current_index = 0;

    while(current->next != nullptr)
    {
        ASSERT_EQ(current->data, expectedValues[current_index]);
        current = current->next;
        ++current_index;
    }

}



int main()
{
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}