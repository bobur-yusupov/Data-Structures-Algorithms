# Data Structures

We need to know that Interface (API/ADT) and Data Structures are different things. The Interface says what you want to do, and the Data Structure says how you want to do it.

We can say Interface is:
  
- Specification
- What data can store
- What operations can perform & what they mean
- Problem

And Data Structure is:

- Representation
- How to store data
- algorithms to support operations
- Solution

2 Main interfaces:

- Set
- Sequence

2 Main Data Structures:

- Array
- Pointer-based

## Linked List

Each element consist of a data and a pointer to the next element.

```plaintext
head -> [data|next] -> [data|next] -> [data|next] -> None
```

Comapring dynamic sequence operations

Static array:

- To insert an element at index `i`, we need to shift all elements firm `i` to `n-1` to the right. Insert and delete cost \(\Theta(n)\).

Linked List:

- To insert a new element, we need to change the pointer of the previous element to the new element and the pointer of the new element to the next element. Insert and delete cost \(\Theta(1)\).
- To access an element at index `i`, we need to traverse the list from the head to the `i-th` element. Access cost \(\Theta(n)\).
