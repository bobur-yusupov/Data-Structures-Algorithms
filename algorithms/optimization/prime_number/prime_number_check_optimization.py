import math

def is_prime(n):
    if n <= 1: # 1
        return False
    
    for i in range(2, n): # n
        if n % i == 0:
            return False
        
    return True

def is_prime1(n):
    """
    T(n) = O(sqrt(n))
    
    """
    if n <= 1:
        return False
    
    if n <= 3:
        return True
    
    if n % 2 == 0 or n % 3 == 0:
        return False
    
    limit = int(math.sqrt(n)) + 1

    for i in range(5, limit, 2):
        if n % i == 0:
            return False
        

    return True
