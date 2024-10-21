# Section 2

## Array

Array is collection of elements with a same of data structure located contiguously in memory.

| 'apple' | 'banana' | 'grape' |
|---------|----------|---------|
|    0    |    1     |   2     |

Also we can easily access to each element with using its index. Indices start from 0 up to length of array - 1. The biggest problem of array is limitation with adding new elements. When we set its size to `10` we can add upto 10 elements because only 10 contiguous memory slots are given and 11th is given to another program. If we want to add a new item we need to copy all elements into a new array and add the element.

## Linked Lists

Linked lists are flexible when it comes to adding a new item. Because in Linked List data structure each node has memory address of the next node. Nodes can be stored in any free memory location.

## Comparation of array and linked list in terms of insertion and access

|           |  Array | Linked List |
|-----------|--------|-------------|
| Reading   | *O(n)* |    *O(1)*   |
| Access    | *O(1)* |    *O(n)*   |
| Insertion | *O(n)* |    *O(1)*   |
| Deletion  | *O(1)* |    *O(n)*   |

### Summary

Which data structure to choose?

We have to type of access to data: random and sequential. Sequential access means iterating through each element to until we reach to expected data.  We only can use sequential access in linked list to access data in a certain location. Because 3rd element can only and only be accessed by 2nd, 2nd by 1st. It is leading to O(3) time complexity. It leads to *O(n)* time complexity When it comes to array, we can easily access using element's index.

We need to analyze the problem and know requirements and choose appropriate data structure.

## Selection Sorting

```python

def smallestElement(arr: List[int]) -> int:
    smallest = arr[0]
    smallest_index = 0

    for i in range(len(arr)):
        if arr[i] < smallest:
            smallest = arr[i]
            smallest_index = i

    return smallest_index


def selectionSort(arr: List[int]) -> List[int]:
    newArr = []

    for i in range(len(arr)):
        smallest = smallestElement(arr)
        newArr.append(arr.pop(smallest))

    return newArr

```

Here is the example of selection sorting algorithm. `smallestElement` function consumes $$O(n)$$ time complexity. As it is a helper function to find smallest element in each iteration. Iteration over `n` elements results to $$O(n)$$ time complexity. Finally selection sorting algorithm is consuming $$O(n^2)$$ time complexity.

## Stack

Stack is a linear data structure which follows **LIFO** (Last In First Order). Simply a last inserted element into a list will go out first. We have to operations in stack: push (putting a new element) and pop(removing the topmost element).

Let's imagine we have stack of plates. We take the topmost plate and use it and put back and again same cycle will be repeated.

### Ket operations in stack

1. **Push**: Adds an element to the top of the list
2. **Pop**: Removes an element from the top of the list
3. **Peek**: Returns the top element without removing it
4. **IsEmpty**: Checks whether list is empty or not
5. **IsFull**: Checks whether the stack is full in case of fixed-size array.
