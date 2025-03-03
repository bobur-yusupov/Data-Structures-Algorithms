from typing import List

def merge(arr: List[int], left: int, mid: int, right: int) -> List[int]:
    n1: int = mid - left + 1
    n2: int = right - mid

    l: List[int] = [0] * n1
    r: List[int] = [0] * n2

    for i in range(n1):
        l[i] = arr[left + i]

    for j in range(n2):
        r[j] = arr[mid + j + 1]

    i: int = 0
    j: int = 0
    k: int = left

    while i < n1 and j < n2:
        if l[i] <= r[j]:
            arr[k] = l[i]
            i += 1
        else:
            arr[k] = r[j]
            j += 1

        k += 1

    while i < n1:
        arr[k] = l[i]
        i += 1
        k += 1
    
    while j < n2:
        arr[k] = r[j]
        j += 1
        k += 1

    return arr

def merge_sort(arr: List[int], left: int, right: int) -> List[int]:
    if left >= right: return

    mid: int = left + (right - left) // 2
    merge_sort(arr, left, mid)
    merge_sort(arr, mid + 1, right)

    merge(arr, left, mid, right)

    return arr
    

print(merge_sort([2, 9, 3, 1, 0], 0, 4))