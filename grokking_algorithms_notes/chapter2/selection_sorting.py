from typing import List

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

print(selectionSort([9, 2, 8, 33]))