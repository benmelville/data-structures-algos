# Doubly Linked List


### What is a doubly linked list?

* List data structure that holds data in Node container object
* Similar to Singly Linked List data structure, except it has pointers to both `next` node and `previous` node
* Almost always has a `tail` pointer
* Takes the overhead of better memory usage in exchange for better time efficiency

### Adding to a Doubly Linked List

#### Adding to the front
* Create the new node
* Set the new node's next pointer to the head
* Set the new heads previous pointer to the new node
* Set the head to the new node


#### Adding to the back
* Create the new node
* Set the new node's previous pointer to the tail
* Set the tail's next pointer to the new node
* Set to the tail to the new node


#### Removing from the back
* Can be done in `O(1)` in a Doubly Linked List with a tail
* Can get the second to last node by using the previous pointer of the tail
* **Edge case:** Removing from a list of size 1


