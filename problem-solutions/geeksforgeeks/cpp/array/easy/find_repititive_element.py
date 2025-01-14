def findDuplicate(arr):
    length = len(arr)
    totalSum = length * (length - 1) / 2

    for i in arr:
        totalSum -= i

    return abs(totalSum)


print(findDuplicate([1, 3, 2, 3, 4]))