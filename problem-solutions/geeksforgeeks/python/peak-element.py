"""
Given an 0-indexed array of integers arr[], find its peak element and return its index. An element is considered to be peak if its value is greater than or equal to the values of its adjacent elements (if they exist).

Note: The output will be "true" if the index returned by your function is correct; otherwise, it will be "false".
"""

class Solution:   
    def peakElement(self,arr):
        
        n = len(arr)
        
        if n == 1:
            return 0
            
            
        if arr[0] >= arr[1]:
            return 0
            
        if arr[n - 1] >= arr[n - 2]:
            return n-1
        
        for i in range(1, len(arr)-1):
            if arr[i] >= arr[i-1] and arr[i] >= arr[i+1]:
            
                return i
                
        return -1