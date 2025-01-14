def segregate0and1(arr):
    left = 0
    right = len(arr) - 1
        
    while (left < right):
        while arr[left] == 0:
            left += 1
        
        while arr[right] == 1:
            right -= 1
        
        if (left < right):
            arr[left], arr[right] = arr[right], arr[left]