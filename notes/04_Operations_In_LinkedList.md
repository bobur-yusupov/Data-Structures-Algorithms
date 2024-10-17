# Operations in Singly Linked List

## Operations

- Traversal
- Searching
- Insertion (to beginning, end or a specific location)
- Length
- Deletion (from beginning, end or a specific location)

## Traversal in Singly Linked Lists

Traversal means visiting each element and doing an operation based on that. For example, visiting to each node in linked lists and doubling values.

Here is the Python example

```python
# Create a node
class Node:
    def __init__(self, val, next=None):
        self.val = val
        self.next = next

def traverse_linked_list(head: Node):
    current = head

    while current.next is not None:
        print(current.val)
        current = current.next

    print()
```

Here is the C++ example

```cpp
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
}

void traverseLinkedList(Node* head) {
    Node* current = head;

    while (current.next != nullptr) {
        cout << current.val << endl;
        current = current.next;
    }

    cout << endl;
}

```

If you noticed we are using `class` in Python but `struct` in C++. Basically both of them are user-defined data types. Struct is the collection of data with different data structures. While class is a block which contains data members and function members.

`struct` is being used to create a linked list node, because we do not need function members. We can use `struct` to define them. In our code we declared and defined `Node`. There are data and next members, I hope you don't have at all.

## Seaching in Linked List

Searching for an element takes more time in Linked List relative to array. As elements in array located in contiguous memory and elements can be accessed using their index, it makes easier to search for an element. However in Linked List an element can be accesses using previous node.

Python example

```python

class LinkNode:
    def __init__(self, val, next=None):
        self.val = val
        self.next = next


def searchElement(head: LinkNode, target):
    while head is not None:
        if head.val == target:
            return True

        head = head.next

    return False

```

C++ example

```cpp
struct LinkNode {
    int val;
    LinkNode* next;

    LinkNode(int val) {
        this->val=val;
        this->next=nullptr;
    }
}

bool searchElement(ListNode head, int target) {
    while (head != nullptr) {
        if (head->data=target) {
            return true;
        }

        head = head->next;
    }

    return false;
}

```
