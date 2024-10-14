# Two-pointer technique 

Two-pointer technique is a highly efficient technique to solve problems involving **strings** and **arrays**. This approach leverages two pointers (or indices) that traverse data structure from opposite ends or in specific directions.

### How it works?
In a typical two-pointer solutions:
1. **Initialize two pointers**: One pointer starts at the beginning and another at the end of the data structure.
2. **Move pointers**: Both pointers move towards each other or according to certain rules until they meet or cross.
3. **Compare or swap**: Based on problem we can compare elements or swap them using pointers.

### Example: Checking if a word is a Palindrome
A palindrome is a word which can be read same from forwards and backwards. (e.g, "madam", "kayak"). We can use two-pointer technique to check palindrome efficiently.
- Set one pointer at the start of the word and another at the end
- Compare characters and move pointers left to right and right to left until they meet.
- If all characters symmetrically matches the word is palindrome; otherwise it is not.

### Code examples
- [Python Example](./two_pointers.py)
- [C++ Example](./twoPointers.cpp)

