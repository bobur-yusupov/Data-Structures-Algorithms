from typing import List

class Solution:
    def sumZero(self, n: int) -> List[int]:
        nums_list: List[int] = []

        if n % 2 == 1:
            nums_list.append(0)

        start_num = 1

        while len(nums_list) < n:
            nums_list.extend([-start_num, start_num])
            start_num += 1

        return nums_list