#include <iostream>
#include <string>
#include <vector>

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

std::vector<std::vector<int>> twoSum(std::vector<int> &array, int target) {
    int left = 0, right = array.size() - 1;

    std::vector<std::vector<int>> ans;

    while (left < right) {
        int sum = array.at(left) + array.at(right);

        if (sum == target) {
            ans.push_back({ array.at(left), array.at(right) });
            left++;
            right--;
        }
        else if (sum < target) {
            left ++;
        }
        else if (sum > target) {
            right --;
        }
    }

    if (ans.empty()) {
        ans.push_back({-1});
    }


    return ans;
}

int main() {
    std::vector<int> arr = { 0, 1, 2, 3, 4, 5 };
    int target = 5;

    std::vector<std::vector<int>> answer = twoSum(arr, target);

    for (std::vector<int> pairs: answer) {
        std::cout << pairs[0] << " " << pairs[1] << std::endl;
    }

    std::cout << std::endl;

    return 0;
}