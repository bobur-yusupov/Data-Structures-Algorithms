"""

Given two arrays a[] and b[], the task is to find the number of elements in the union between these two arrays.

The Union of the two arrays can be defined as the set containing distinct elements from both arrays. If there are repetitions, then only one element occurrence should be there in the union.

Note: Elements of a[] and b[] are not necessarily distinct.

Time complexity: O(n + m)
Space complexity: O(n)

"""


class Solution:    
    #Function to return the count of number of elements in union of two arrays.
    def findUnion(self, a, b):
        hashTable = {}
        
        for number in a:
            if number in hashTable:
                hashTable[number] += 1
            
            else:
                hashTable[number] = 1
        
        for number in b:
            if number in hashTable:
                hashTable[number] += 1
            
            else:
                hashTable[number] = 1
                
        
        result = []
        
        for number in hashTable.keys():
            result.append(number)
            
            
        return len(result)