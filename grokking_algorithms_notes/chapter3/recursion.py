def factorial(n: int, result: int = 1) -> int:
    if n == 1:
        return result
    
    else:
        result = result * n
        return factorial(n-1, result)

print(factorial(5))