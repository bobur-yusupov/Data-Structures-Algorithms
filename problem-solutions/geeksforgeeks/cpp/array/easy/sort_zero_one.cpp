/*

Given an array arr consisting of only 0's and 1's in random order. 
Modify the array in-place to segregate 0s onto the left side and 1s onto the right side of the array.

Time complexity: O(n)
Space complexity: O(1)

*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        int left = 0;
        int right = arr.size() - 1;
        
        while (left < right) {
            while (arr[left] == 0 and left < right) {
                left++;
            }
            
            while (arr[right] == 1 and left < right) {
                right--;
            }
            
            if (left < right) {
                swap(arr[left], arr[right]);
                
                left++;
                right--;
            }
        }
    }
};