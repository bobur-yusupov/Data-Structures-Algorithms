# Linked Lists

#### Head
Head is a pointer in a linked list used to store the location of the first element in a list

#### Node
Node is a container which stores any value regardless of its data structure

**Python**
```
class Node:
    self.val: int
    self.next: Optional[Node]
```

`Optional` is used to specify next can be whether `null` or `Node`. For example when we reach to the last element of list next value will be `null`.

**C++**
```
class Node {
    public:
        Node* next
        int val;
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