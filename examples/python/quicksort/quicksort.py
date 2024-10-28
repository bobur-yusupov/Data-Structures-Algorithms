import timeit

def quicksort(array: list) -> list:
    if len(array) < 2:
        return array
    
    else:
        pivot = array[0]
        less = [i for i in array[1:] if i <= pivot]

        greater = [j for j in array[1:] if j >= pivot]

        return quicksort(less) + [pivot] + quicksort(greater)


sample_array = [5, 9, 1, 0, -5]


def binary_search(array: list, item) -> list:
    low = 0
    high = len(array) - 1

    while low <= high:
        mid = (low + high) // 2

        guess = array[mid]

        if guess == item:
            return mid
        
        elif guess > item:
            high = mid - 1

        else:
            low = mid + 1

    return None


setup_code = '''
from __main__ import binary_search, sample_array, quicksort
'''

test_code = '''
quicksort(sample_array)
'''
test_code2 = '''
binary_search(sample_array, 9)
'''

execution_time = timeit.timeit(test_code, setup=setup_code, number=1000)
execution_time2 = timeit.timeit(test_code2, setup=setup_code, number=1000)

print(f"Execution time for quicksort is {execution_time}")
print(f"Execution time for binary_search is {execution_time2}")  # Corrected this line