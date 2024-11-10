//
// Created by Benjamin Melville on 10/2/24.
//
#include <gtest/gtest.h>
#include <vector>
#include <iostream>
#include "Queue.h"

TEST(QueueTest, SanityCheck)
{
    ASSERT_TRUE(true);
}

TEST(QueueTest, EnqueueTest)
{
    Queue<int> queue;
    queue.enqueue(6);
    queue.enqueue(56);
    queue.enqueue(78);
    queue.enqueue(90);
    queue.enqueue(56);

    ASSERT_EQ(queue.size(), 5);
}

TEST(QueueTest, DequeueTest)
{
    Queue<int> queue;
    queue.enqueue(6);
    queue.enqueue(56);
    queue.enqueue(78);
    ASSERT_EQ(queue.size(), 3);
    queue.enqueue(90);
    queue.enqueue(56);
    ASSERT_EQ(queue.size(), 5);

    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    ASSERT_EQ(queue.size(), 2);
    queue.dequeue();
    queue.dequeue();

    ASSERT_EQ(queue.size(), 0);
    queue.dequeue();
    queue.dequeue();
    ASSERT_EQ(queue.size(), 0);
}

TEST(QueueTest, IsEmpty)
{
    Queue<int> queue;
    queue.enqueue(6);
    queue.enqueue(56);
    queue.enqueue(78);
    queue.enqueue(90);
    queue.enqueue(56);

    ASSERT_FALSE(queue.isEmpty());

    queue.dequeue();
    queue.dequeue();    
    queue.dequeue();
    queue.dequeue();    
    queue.dequeue();
    queue.dequeue();    
    queue.dequeue();
    queue.dequeue();
    ASSERT_TRUE(queue.isEmpty());


}