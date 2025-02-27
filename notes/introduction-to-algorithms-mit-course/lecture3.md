# Sets and sorting

## Review

### Interface

Collection of operations (e.g. sequence and sets)

### Data Structure

Way to store data that supports operations

## Permutation sort

In permutation sort we need to go through different orders of the set and check each whether sorted or not

```plaintext
1. Enumerate permutations 
2. 
- for i = 1 to n-1:
- Check if term is sorted: if B[i] < B[i+1]:
- return B
```

The time complexity of iteration is \(\Omega(n!)\) because the number of permutations is \(n!\).
Next checking each permutation whether it **is** sorted, it takes \(\Omega(n)\) time to each of the permutations. At a result, it requires \(\Omega(n!*n)\) to complete sorting a set.

```python
def permutation_sort(A):
    for B in permutations(A):
        if is_sorted(B):
            return B
        else:
            continue
```

## Selection sort

The main concept of selection sort algorithm is going through the set and finding the biggest element and pushing it to the end. Then the same process continues until list is sorted.

```plaintext
1. Iterate through the set:
   - For i = 1 to n-1:
     - min_index = i  # variable to keep track of the biggest number
   
2. For each i:
   - For j = 1 to n-i-1:
     - Compare the j-th number with the number in max_element_index:
       - If A[j] <> A[min_index]:
         - Update min_index = j
   
3. Swap the maximum element with the last unsorted element:
   - swap(A[min_index], A[i])

```

```python
def selection(A):
    n = len(A)

    for i in range(n):
        min_index = i
        for j in range(i, n):
            if A[j] < A[min_index]:
                min_index = j
        
        A[i], A[min_index] = A[min_index], A[i]

    return A
```

Here is the code from lecture

```python

def prefix_max(A, i):
    """
    return the maximum element in A[:i - 1]
    """
    
    if i > 0:
        j = prefix_max(A, i - 1) # 
        if A[i] < A[j]:
            return j

    return i

my_list = [4, 1, 9, 3]

print(prefix_max(my_list, 3))
```

The time complexity of the `prefix_max(A, i)` function is:

\(S(1) = \Theta(1)\)
As it is a recursion for n elements following function hold:
\(S(n) = \Theta(n - 1) + \Theta(1)\)
\(S(n) = cn\)
\(cn = c(n-1) + \Theta(n)\)
\(c = \Theta(1)\)

Here is the implementation of selection sort algorithm:

```python
def selection_sort(A, i = None):
    '''Sort A[:i + 1]'''
    if i is None:
        i = len(A) - 1
    
    if i > 0:
        j = prefix_max(A, i)
        A[i], A[j] = A[j], A[i]
        selection_sort(A, i - 1)

    return A
```

\(T(n) = T(n-1) + \Theta(n) = \Theta(n^2)\)

## Merge sort

Merge sort is a divide and conquer algorithm. It divides the set into two halves and sorts each half separately. Then it merges the sorted halves.

```python
def merge(L, R, A, i, j, a, b):
    '''Merge sorted L[:i] and R[:j] into A[a:b]'''
    if a < b:
        if (j <= 0) or (i > 0 and L[i-1] > R[j - 1]):
            A[b - 1] = L[i - 1]
            i = i - 1
        else:
            A[b - 1] = R[j - 1]
            j = j - 1
        
        merge(L, R, A, i, j, a, b - 1)

def merge_sort(A, a = 0, b = None):
    '''Sort A[a:b]'''

    if b is None: b = len(A)
    if 1 < b - a:
        c = (a + b + 1) // 2
        merge_sort(A, a, c)
        merge_sort(A, c, b)
        L, R = A[a:c], A[c:b]

        merge(L, R, A, len(L), len(R), a, b)

    return A
```

\(T(1) = \Theta(1)\)
\(T(n) = 2T(n/2) + \Theta(n) \Rightarrow T(n) = \Theta(n logn)\)
