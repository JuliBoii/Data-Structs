# Linked List in Python

### Differences between a Linked List and List from Python

- A linked list does not have indexes
- a list is in a continous place in memory
	- because of a list's continuty in memory, we can access the items by index
	- Thus, the time compexity is **O(1)**
- While a LL has a time compexity of **O(n)** when looking for a node by index in the LL
- LL: nodes are spread all over the place in memory
- LL: we have a head variable pointing to the first item
- LL: a tail variable pointing to the last item
- LL: each node points to the next node in the sequence, till we reach the last one, which points to none

---

### Appeding a Node

In order to do this:

- have last node point to new node
- have tail point to new node
- then add it into the list

This process is **O(1)**, because it does not matter how many nodes
we have, since the number of operations to complete the task
is the same

---

### Removing a Node at the end

In order to do this:

- In order to move the tail pointer back we need to iterate the list to reach the second to last node
- Then we can set tail equal to the iterating pointer

But since we have to iterate through the list, the operation is **O(n)**.

---

### Prepending a Node

In order to do this:

- We set the new node's pointer to head
- reassign head to point at the new node, adding it to the list

This does not depend on the number of nodes in the list.
Therefore the operation is **O(1)**.

---

### Removing the Head

In order to do this:

- assign a temp node to head
- set head equal to the next node in the list
- Then we delete the temp node of the previous head

Again, this operation will be the same number of operations, regardless of the the list size.
So, the operation is **O(1)**.

---

### Inserting a Node into the List

In order to do this:

- set a counter to zero
- set a temp node equal to the head
- use the temp node to iterate, while incrementing the counter
	- until, we reach our desired index
- set the new node's next pointer to the temp node's next pointer
- set the temp node's next pointer to the new node, adding the new node to the list

Since we have to iterate the whole list, this operation will be **O(n)**.

---

### Removing a Node that is not the Head or Tail

In order to do this:

- set a counter to zero
- set a temp node equal to node before the node we want, we will call this node _prevN_
	- to do that we iterate until we reach the _(index - 1)_
- set another temp node equal to the first temp node's next pointer, we will call this node _currN_
- we then set _prevN node's_ next pointer to _currN node's_ next pointer
- then we can delete _currN_ to remove it from the list

Since we have to iterate the whole list, this operation will also be **O(n)**.