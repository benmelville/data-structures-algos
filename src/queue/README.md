# Queue

Unlike stacks which are Last In First Out (LIFO), queues are First In First Out (FIFO).

> [!NOTE]
The way to think about a queue is like a line at the grocery store. The first person to enter the line is going to be the first person to checkout.

### Queue supported operations
```cpp
    // adds element to the back of the queue
    void enqueue(x) 

    // removes and returns the element that was in the queue the longest
    x dequeue()

    // returns the element that was in the queue longest, but DOES NOT REMOVE
    x peek()

    // checks size or checks to see if the front of the queue is null
    bool isEmpty()

    // sets the front of the queue to null
    void clear()

    // returns the number of elements in the queue
    int size()
```

### Queue unsupported operations
* searching
* arbitrary index access
* arbitrary add or remove

### Linked List Backed Queues
