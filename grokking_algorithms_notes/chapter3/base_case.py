def count(n):
    # Base case
    if (n==1):
        print(1)
        return

    # Recursive case
    else:
        print(n)
        return count(n-1)
    
count(5)