from typing import List

def permutations(result: List[int], array: List[int], idx: int) -> List[int]:
    if idx == len(array) - 1:
        result.append(array[:])
        return
    
    for i in range(idx, len(array)):
        array[idx], array[i] = array[i], array[idx]

        permutations(result, array, idx=idx+1)

        array[idx], array[i] = array[i], array[idx]


result = []
array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15]

def next_permutation(array):
    current = array[:]

    result = []
    permutations(result=result, array=array, idx=0)

    result.sort()

    for i in range(len(result)):
        if result[i] == array:
            if i < len(array) - 1:
                array[:] = result[i+1]

            else:
                array[:] = result[0]

            break


next_permutation(array=array)

print(array)