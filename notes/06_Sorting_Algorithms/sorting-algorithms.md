# Sorting Algorithms

## Selection sort

Selection sort iteratively selects maximum number from unsorted part of array and pushes to the back.

Here is the code:

```python
def selection_sort(A):
    length = len(A)

    for i in range(length):
        min_index = i
        for j in range(i, length):
            if A[j] < A[min_index]:
                min_index = j

        A[min_index], A[i] = A[i], A[min_index]

    return A
```

## Insertion sort

Insertion sort interatively compares two consequent elements and swaps if first element smaller than the second element until all elements sorted.

Here is the code:

```python
def insertion_sort(A):
    n = len(A)

    for i in range(n):
        key = A[i]
        j = i - 1

        while j >= 0 and key < A[j]:
            A[j + 1] = A[j]
            j -= 1

        A[j + 1] = key

    return A
```

## Bubble Sort

Bubble sort continuesly swaps adjacent elements if they are in wrong order.

```python
def bubble_sort(A):
    n = len(A)

    for i in range(n):
        swapped = False

        for j in range(n - i - 1):
            if A[j] > A[j + 1]:
                A[j], A[j + 1] = A[j + 1], A[j]
                swapped = True

        if not swapped:
            break

    return A
```

## Merge Sort

Merge sort uses divide and conquer technique to sort the algorithm

```python

def merge(A, left, mid, right):
    n1 = mid - left + 1
    n2 = right - mid

    L = [0] * n1
    R = [0] * n2

    for i in range(n1):
        L[i] = A[left + i]
    
    for i in range(n2):
        R[i] = A[mid + i + 1]

    i = 0
    j = 0
    k = left

    while i < n1 and j < n2:
        if L[i] < R[j]:
            A[k] = L[i]

            i += 1

        elif L[i] > R[j]:
            A[k] = R[j]
            j += 1
        
        k += 1

    while i < n1:
        A[k] = L[i]
        k += 1
        i += 1
    
    while j < n2:
        A[k] = R[j]
        k += 1
        j += 1

    return A


def merge_sort(A, left, right):
    mid = left + (right - left) // 2

    merge_sort(A, left, mid)
    merge_sort(A, mid + 1, right)

    merge(A, left, mid, right)

    return A

```

## Quick sort
