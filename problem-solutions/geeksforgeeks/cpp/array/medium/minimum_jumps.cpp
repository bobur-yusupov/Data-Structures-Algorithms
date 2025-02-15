/*

You are given an array arr[] of non-negative numbers. 
Each number tells you the maximum number of steps you can jump forward from that position.

For example:
 * If arr[i] = 3, you can jump 1 step, 2 steps, or 3 steps forward from position i.
 * If arr[i] = 0, you cannot jump forward from that position.

Note:  Return -1 if you can't reach the end of the array.

*/

#include <bits/stdc++.h>

using namespace std;

int minimum_steps1(vector<int>& arr) {
    int length = arr.size(); // S = 1
    if (length == 0 || arr[0] == 0) {
        return -1;
    }


    int total_steps = 0; // S = 1
    int current_element = 0; // S = 1

    while (current_element < length) {
        if (arr[current_element] == 0) { // T = 1
            return -1;
        }

        current_element += arr[current_element]; // T = 1
        total_steps++;
    }

    return total_steps; // T = 1
}

/*

Space complexity = length (1) + total_steps (1) + current_element (1) = 3
Time complexity (for worst case) = 3 * n

Space complexity: O(1)
Time complexity: O(n)

*/

int minimum_steps2(vector<int>& arr) {

}