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