/*
Given an 0-indexed array of integers arr[], find its peak element and return its index. 
An element is considered to be peak if its value is greater than or equal to the values of its adjacent elements (if they exist).
*/

/*
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
    int peakElement(vector<int> &arr) {
        int n = arr.size();

        if (n==1) {
            return 0;
        }

        if (arr[0] > arr[1]) {
            return 0;
        }

        if (arr[n-1] >= arr[n-2]) {
            return n-1;
        }

        for (int i=1; i<n-1; i++) {
            if (arr[i] >= arr[i-1] && arr[i] >= arr[i+1]) {
                return i;
            }
        }
    }
};