def selection_sort(A):
    length = len(A)

    for i in range(length):
        min_index = i
        for j in range(i, length):
            if A[j] < A[min_index]:
                min_index = j

        A[min_index], A[i] = A[i], A[min_index]

    return A


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


def swap(arr, i, j):
    arr[i], arr[j] = arr[j], arr[i]


# def quick_sort(A, low, high):
#     if low < high:
#         pi = 

print(insertion_sort([6, 2, 9, 1, 0, -3, -10]))