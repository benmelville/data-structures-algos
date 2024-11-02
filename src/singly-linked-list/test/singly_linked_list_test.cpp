//
// Created by Benjamin Melville on 9/27/24.
//

#include <vector>
#include <gtest/gtest.h>
#include "SinglyLinkedList.h"

TEST(SinglyLinkedListTest, SanityCheck)
{
    ASSERT_TRUE(true);
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

    SinglyLinkedList<int> myList;
    myList.addToFront(6);
    myList.addToFront(68);
    myList.addToFront(89);
    myList.addToFront(60);
    myList.addToFront(78);
    myList.addToFront(45);

    ASSERT_EQ(myList.getHead()->data, 45);

    SinglyLinkedListNode<int> *current = myList.getHead();
    int current_index = 0;

    while (current->next != nullptr)
    {
        ASSERT_EQ(current->data, expectedValues[current_index]);
        current = current->next;
        ++current_index;
    }
    ASSERT_EQ(current->data, expectedValues.back());
}

TEST(SinglyLinkedListTest, AddToBack)
{
    std::vector<int> expectedValues;
    expectedValues.push_back(6);
    expectedValues.push_back(68);
    expectedValues.push_back(89);
    expectedValues.push_back(60);
    expectedValues.push_back(78);
    expectedValues.push_back(45);

    SinglyLinkedList<int> myList;
    myList.addToBack(6);
    myList.addToBack(68);
    myList.addToBack(89);
    myList.addToBack(60);
    myList.addToBack(78);
    myList.addToBack(45);

    ASSERT_EQ(myList.getHead()->data, 6);

    SinglyLinkedListNode<int> *current = myList.getHead();
    int current_index = 0;

    while (current->next != nullptr)
    {
        ASSERT_EQ(current->data, expectedValues[current_index]);
        current = current->next;
        ++current_index;
    }

    ASSERT_EQ(current->data, expectedValues.back());
}

TEST(SinglyLinkedListTest, RemoveFromFront)
{

    std::vector<int> expectedValues;
    expectedValues.push_back(89);
    expectedValues.push_back(68);
    expectedValues.push_back(6);

    SinglyLinkedList<int> myList;
    myList.addToFront(6);
    myList.addToFront(68);
    myList.addToFront(89);
    myList.addToFront(60);
    myList.addToFront(78);
    myList.addToFront(45);

    myList.removeFromFront();
    myList.removeFromFront();
    myList.removeFromFront();

    SinglyLinkedListNode<int> *current = myList.getHead();
    int current_index = 0;

    while (current->next != nullptr)
    {
        ASSERT_EQ(current->data, expectedValues[current_index]);
        current = current->next;
        ++current_index;
    }

    ASSERT_EQ(current->data, expectedValues.back());
}

TEST(SinglyLinkedListTest, RemoveFromBack)
{
    std::vector<int> expectedValues;
    expectedValues.push_back(89);
    expectedValues.push_back(68);
    expectedValues.push_back(6);

    SinglyLinkedList<int> myList;
    myList.addToBack(89);
    myList.addToBack(68);
    myList.addToBack(6);
    myList.addToBack(60);
    myList.addToBack(78);
    myList.addToBack(45);

    myList.removeFromBack();
    myList.removeFromBack();
    myList.removeFromBack();

    SinglyLinkedListNode<int> *current = myList.getHead();
    int current_index = 0;

    while (current->next != nullptr)
    {
        ASSERT_EQ(current->data, expectedValues[current_index]);
        current = current->next;
        ++current_index;
    }

    ASSERT_EQ(current->data, expectedValues.back());
}

TEST(SinglyLinkedListTest, RemoveFromFrontEmptyList)
{
    SinglyLinkedList<int> myList;
    myList.removeFromFront();
    EXPECT_EQ(myList.getHead(), nullptr);
}

TEST(SinglyLinkedListTest, RemoveFromBackEmptyList)
{
    SinglyLinkedList<int> myList;
    myList.removeFromBack();
    EXPECT_EQ(myList.getHead(), nullptr);
}

TEST(SinglyLinkedListTest, RemoveFromFrontSingleNodeList)
{
    SinglyLinkedList<int> myList;
    myList.addToBack(5);
    myList.removeFromFront();
    EXPECT_EQ(myList.getHead(), nullptr);
}

TEST(SinglyLinkedListTest, RemoveFromBackSingleNodeList)
{
    SinglyLinkedList<int> myList;
    myList.addToBack(5);
    myList.removeFromBack();
    EXPECT_EQ(myList.getHead(), nullptr);
}

TEST(SinglyLinkedListTest, RemoveFromBackTwoNodeList)
{
    SinglyLinkedList<int> myList;
    myList.addToBack(5);
    myList.addToBack(6);
    myList.removeFromBack();
    EXPECT_EQ(myList.getHead()->next, nullptr);
}

TEST(SinglyLinkedListTest, RemoveFromBackThreeNodeList)
{
    SinglyLinkedList<int> myList;
    myList.addToBack(5);
    myList.addToBack(6);
    myList.addToBack(7);
    myList.removeFromBack();
    EXPECT_EQ(myList.getHead()->next->next, nullptr);
}