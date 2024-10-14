#include <iostream>
#include <string>

bool isPalindrome(const std::string& word) {
    /*
    Check if word is palindrome.

    Palindrome words can be read same from backward and forward.

    Args:
    word (const std::string& word): The word to check.

    Returns:
    bool: True if word is palindrome else False
    */

    // Initizalize two pointers at start and end, moving toward center
    int leftPointer = 0;
    int rightPointer = word.length() - 1;

    // Compare characters from the start and end, moving toward center
    while (leftPointer < rightPointer) {
        if (word[leftPointer] != word[rightPointer]) {
            return false; // Not a palindrome if characters differ
        }

        leftPointer++; // Move left pointer one step to the right
        rightPointer--; // Move right pointer one step to the left
    }

    return true; // If no mismatches we can assume word is palindrome and return true
}

int main() {

    return 0;
}