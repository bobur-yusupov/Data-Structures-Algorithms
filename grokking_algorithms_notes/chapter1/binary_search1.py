import timeit

# We are given an array.
sample_array = [1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59]

def do_search(arr, item):
    for i in arr:
        if i == item:
            return arr.index(i)
        
    return None

def binary_search(arr, item):
    low = 0
    high = len(arr) - 1  # Use len(arr) instead of len(sample_array)

    while low <= high:
        mid = (low + high) // 2

        guess = arr[mid]

        if guess == item:
            return mid
        
        if guess > item:
            high = mid - 1

        else:
            low = mid + 1

    return None

setup_code = '''
from __main__ import binary_search, sample_array, do_search
'''

test_code = '''
binary_search(sample_array, 53)
'''
test_code2 = '''
do_search(sample_array, 53)
'''

execution_time = timeit.timeit(test_code, setup=setup_code, number=1000)
execution_time2 = timeit.timeit(test_code2, setup=setup_code, number=1000)

print(f"Execution time for binary_search is {execution_time}")
print(f"Execution time for do_search is {execution_time2}")  # Corrected this line
