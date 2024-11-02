//
// Created by Benjamin Melville on 10/2/24.
//
#include "Stack.h"
#include <gtest/gtest.h>
#include <vector>
#include <iostream>

TEST(StackTest, SanityCheck)
{
    ASSERT_TRUE(true);
}

TEST(StackTest, PushTest)
{
    std::vector<int> testVec;
    testVec.push_back(4);
    testVec.push_back(12);
    testVec.push_back(34);
    testVec.push_back(67);
    testVec.push_back(78);
    testVec.push_back(90);
    testVec.push_back(46);
    testVec.push_back(52);

    Stack<int> testStack;

    testStack.push(4);
    testStack.push(12);
    testStack.push(34);
    testStack.push(67);
    testStack.push(78);
    testStack.push(90);
    testStack.push(46);
    testStack.push(52);

    for (unsigned long i = testVec.size() - 1; i > 0; --i)
    {
        ASSERT_EQ(testVec[i], testStack.pop());
    }
}

TEST(StackTest, PopTest)
{
    Stack<int> testStack;

    testStack.push(4);
    testStack.push(12);
    testStack.pop();
    ASSERT_EQ(testStack.getSize(), 1);

    testStack.push(34);
    testStack.push(67);

    ASSERT_EQ(testStack.getSize(), 3);

    testStack.push(78);
    testStack.push(90);
    testStack.push(46);
    testStack.pop();

    ASSERT_EQ(testStack.getSize(), 5);

    testStack.pop();
    testStack.pop();
    testStack.pop();
    testStack.pop();
    testStack.pop();
    testStack.pop();
    testStack.pop();
    testStack.pop();

    ASSERT_EQ(testStack.getSize(), 0);
}

TEST(StackTest, PeekTest)
{
    Stack<int> testStack;

    testStack.push(4);
    testStack.push(12);
    ASSERT_EQ(testStack.peek(), 12);

    testStack.push(34);
    testStack.push(67);
    testStack.push(78);
    ASSERT_EQ(testStack.peek(), 78);

    testStack.push(90);
    testStack.push(46);
    ASSERT_EQ(testStack.peek(), 46);

    testStack.pop();
    ASSERT_EQ(testStack.peek(), 90);

    testStack.clear();
    ASSERT_EQ(testStack.peek(), 0);
}

TEST(StackTest, IsEmptyTest)
{
    Stack<int> testStack;

    testStack.push(4);
    testStack.push(12);
    testStack.push(34);
    testStack.push(67);
    testStack.push(78);
    testStack.push(90);
    testStack.push(46);
    testStack.push(52);

    testStack.clear();

    std::cout << testStack.getSize() << std::endl;

    ASSERT_TRUE(testStack.isEmpty());
}

TEST(StackTest, ClearTest)
{
    Stack<int> testStack;

    testStack.push(4);
    testStack.push(12);
    testStack.push(34);
    testStack.push(67);
    testStack.push(78);
    testStack.push(90);
    testStack.push(46);
    testStack.push(52);

    testStack.clear();

    ASSERT_EQ(testStack.getSize(), 0);
}