# Linked Lists

## Head

Head is a pointer in a linked list used to store the location of the first element in a list

## Node

Node is a container which stores any value regardless of its data structure.

### Python node example

```python
class Node:
    self.val: int
    self.next: Optional[Node]
```

`Optional` is used to specify next can be whether `null` or `Node`. For example when we reach to the last element of list next value will be `null`.

### C++ node example

```cpp
class Node {
    public:
        Node* next
        int val;
}
```

or

```cpp
struct Node {
    int data;
    Node* next;

    Node (int data) {
        this->data = data;
        this->next = nullptr;
    }
}
```

`Node` will be stored in two slots of memory, one is for `val` and another for `next`.

| val | next |
|-----|------|

#### How we link nodes?

**First Node**. Imaging its location is `AA` in memory

| 0 | 0 |
|---|---|  

**Second Node**. Location is `AB` in memory

| 1 | 0 |
|---|---|

to link these nodes we can save second's location in `next`.

| 0 | `AB`|
|---|-----|

`AB` is the pointer to the second node.

### Linked List vs Array

In linked list Nodes will be stored in different memory location. But in array elements will be stored in contiguous memory locations.

| 0 | 1 | 2 | 3 | 4 |
|---|---|---|---|---|

This is a sample array, which all its elements are in contiguous memory.

Adding a new element in Linked List is easier than array. Because when we try to add a new element in array it copies all elements from previous array to a new memory location, adds new element. It is obvious it consumes more time and memory relative to linked list.

#### Deletion operation in Linked List

As we know linked lists are located in different memory locations, to delete an element at the center of the list we will need $O(n + n/2)$ time, n is the total number of nodes. But in array we only need to delete an element in `n\2` index.

##### Python element deletion example

```python
numbers = [1, 2, 3, 4, 5]

# Find the center index
center_index = len(numbers) // 2

# Remove the element at the center index
del numbers[center_index]

# Display the modified list
print(numbers)
# Output: [1, 2, 4, 5]

```

##### C++ element deletion example

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5}; // Create numbers array

    // Index of element at the center
    int centerIndex = numbers.size() / 2; 

    // Delete element at the center
    numbers.erase(numbers.begin() + centerIndex);

    // Print elements after deletion
    for (int num : numbers) {
        cout << num << " ";
    }

    // Output: 1 2 4 5

    return 0;
}

```

---

### Summary

#### Linked List

- Dynamic size
- Nodes stored in non-contiguous memory locations.
- Easier insertion and deletion of elements without reallocating memory

#### Array

- Fixed, contiguous memory allocation.
- Effective access by index but costly resizing.
- Insertion and deletion can be costly if resizing or shifting is necessary.
