def maxWater(arr):
    stack = []
    n = len(arr)
    total = 0

    for i in range(n):
        print(f"Start of {i + 1}th interation")
        while stack and arr[i] > arr[stack[-1]]: # iterates until stack is not empty and current element is higher than the left boundry
            top = stack.pop() # right boundry
            print(f"Top element {top} value {arr[top]} in {i+1}th iteration")

            if not stack: # if stack is empty it stops the iteration because there is no right boundry
                break

            left = stack[-1] # setting left boundry
            print(f"Value of left: {left} from list {arr[left]}")
            height = min(arr[i], arr[left]) - arr[top] # calculates the height of the water
            print(f"Value of height: {height}")
            width = i - left - 1 # calculates the width
            print(f"Value of width: {width}")
            total += (height * width) # adding to total
            print(f"Value of total: {total}")
            print(f"Stack after pop in {i + 1}th iteration: {stack}")


        stack.append(i)
        print(f"Stack after push in {i + 1}th iteration: {stack}")

    
    return total



print(maxWater([2, 0, 1, 3, 0, 2]))