from typing import Tuple

def count_long_subarray(A: Tuple):
    '''
    Input:  A     | Python Tuple of positive integers
    Output: count | number of longest increasing subarrays of A
    '''
    count = 0
    max_length = 0

    i = 0
     
    for j in range(1, len(A) + 1):
        if j < len(A) and A[j - 1] < A[j]:
            continue

        else:
            length = j - i

            if length > max_length:
                max_length = length
                count = 1

            elif length == max_length:
                count += 1
            
            i = j

    return count
