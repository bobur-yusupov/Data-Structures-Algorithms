my_list = [6, 1, 3, 8]

def selection(A):
    n = len(A)

    for i in range(n):
        min_index = i
        for j in range(i, n):
            if A[j] < A[min_index]:
                min_index = j
        
        A[i], A[min_index] = A[min_index], A[i]

    return A

def prefix_max(A, i):
    """
    return the maximum element in A[:i - 1]
    """
    
    if i > 0:
        j = prefix_max(A, i - 1)

        if A[i] < A[j]:
            return j

    return i

print(prefix_max(my_list, 3))

def selection_sort(A, i = None):
    '''Sort A[:i + 1]'''
    if i is None:
        i = len(A) - 1
    
    if i > 0:
        j = prefix_max(A, i)
        A[i], A[j] = A[j], A[i]
        selection_sort(A, i - 1)

    return A

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


print(merge_sort(my_list))