from typing import List

class Solution:
    def sumZero(self, n: int) -> List[int]:
        nums_list: List[int] = [0] if n % 2 == 1 else [] # Initialize with 0 if n is odd

        start_num = 1

        while len(nums_list) < n:
            nums_list.extend([-start_num, start_num])
            start_num += 1

        return nums_list