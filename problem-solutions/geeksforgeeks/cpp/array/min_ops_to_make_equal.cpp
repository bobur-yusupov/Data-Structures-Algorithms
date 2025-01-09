/*

Given an array. We need to find the minimal number of operations to make all elements of array equal by incrementing each element by k.
One increment accounts as one operation.

Time complexity: O(n)
Space complexity: O(1)

*/

#include <bits/stdc++.h>
using namespace std;

int min_ops(vector<int> &array, int k) {
    int maxElement = *max_element(array.begin(), array.end());
    int minimumOperations = 0;

    for (int integerElement: array) {
        if ((maxElement - integerElement) % k != 0) {
            return -1;
        }

        minimumOperations += (maxElement - integerElement) / k;
    }

    return minimumOperations;
}

int main() {
    vector<int> array = {21, 33, 9, 45, 63};

    cout << min_ops(array, 6);
    
    return 0;
}