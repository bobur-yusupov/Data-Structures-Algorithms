# Define two different words
word1 = "kayak"
word2 = "light"

# Define a function to check if a word is a palindrome
def is_palindrome(word: str) -> bool:
    # Initialize two pointers, one at the start (left) and one at the end (right) of the word
    left, right = 0, len(word) - 1

    # Loop until the pointers meet in the middle
    while left < right:
        # Check if characters at the left and right pointers are different
        if word[left] != word[right]:
            return False  # If they differ, the word is not a palindrome
        
        # Move the left pointer one step to the right
        left += 1
        # Move the right pointer one step to the left
        right -= 1

    # If we complete the loop without finding mismatches, the word is a palindrome
    return True

# Check if each word is a palindrome and print the result
print(is_palindrome(word=word1))  # Expected output: True, since "kayak" is a palindrome
print(is_palindrome(word=word2))  # Expected output: False, since "light" is not a palindrome

def twoSum(array: list, target: int) -> list:
    left = 0;
    right = len(array) - 1

    while left < right:
        if array[left] + array[right] == target:
            return [array[left], array[right]]
        
        elif array[left] + array[right] < target:
            left -= 1

        elif array[left] + array[right] > target:
            right -= 1
        
    return [-1]

number_list = [1, 2, 3, 4, 5]
target = 5

print(twoSum(array=number_list, target=target))