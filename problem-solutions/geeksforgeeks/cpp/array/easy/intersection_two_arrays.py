class Solution:
    def intersectionWithDuplicates(self, a, b):
        hashA = {}
        hashB = {}
        
        for number in a:
            if number in hashA:
                hashA[number] += 1
            else:
                hashA[number] = 1
                
        for number in b:
            if number in hashB:
                hashB[number] += 1
            else:
                hashB[number] = 1
                
        
        result = []
        
        for key in hashA.keys():
            if key in hashB:
                result.append(key)
        
        return result