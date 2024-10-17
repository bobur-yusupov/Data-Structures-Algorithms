"""
I used generator, relatively memory-efficient approach as we do not need to spend extra O(n) to create another array

Time: O(n)
Space: O(1)

"""

reversed

from typing import Iterable, List, Any

test_array = [1, 2, 3, 4, 5]

def reverseArray(array: List[Any]) -> Iterable[Any]:
    length = len(array) - 1

    while length >= 0:
        yield array[length]

        length -= 1

print(list(reverseArray(array=test_array)))