/*

Given an array arr, rearrange the array according to the following relations :

arr[i] >= arr[i-1], if i is even.
arr[i] <= arr[i-1], if i is odd.
[Considering 1-base indexed array]

Return the rearranged array.

Time complexity: O(n)
Space complexity: O(1)

*/

#include <bits/stdc++.h>
#include <iostream>

std::vector<int> rearrangeArrayToEvenGreaterThanOdd(std::vector<int> &array) { // O(1)
    int length = array.size();
    std::vector<int> ans(length);

    for (int i = 1; i <= length; i++) { // Time: O(n/2)
        if ((i + 1) % 2 == 0) {
            if (array[i] < array[i - 1]) {
                std::swap(array[i], array[i - 1]);
            }
        }

        else {
            if (array[i] > array[i - 1]) {
                std::swap(array[i], array[i - 1]);
            }
        }
    }

    for (int i = 0; i < length; i++) {
        ans[i] = array[i];
    }

    return ans;
}

std::vector<int> rearrangeArrayToEvenGreaterThanOdd1(std::vector<int> &array) {
    int length = array.size();
    
    sort(array.begin(), array.end());
    std::vector<int> ans(length);

    int pointer1 = 0, pointer2 = length - 1;

    for (int i = 0; i < length; i++) {
        if ((i + 1) % 2 == 0) {
            ans[i] = array[pointer2];
            pointer2--;
        }

        else {
            ans[i] = array[pointer1];
            pointer1++;
        }
    }

    return ans;
}

int main() {
    std::vector<int> arr = { 1, 2, 3, 4, 5 };

    for (int elem: arr) {
        std::cout << elem << " ";
    }

    std::cout << std::endl;

    std::vector<int> ans = rearrangeArrayToEvenGreaterThanOdd(arr);

    for (int elem: ans) {
        std::cout << elem << " ";
    }

    std::cout << std::endl;

    return 0;
}