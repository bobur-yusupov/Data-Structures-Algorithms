/*
Binary search algorithm

Time complexity: O(log n)
Space complexity: O(1)
*/
#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> array, int numberToSearch) {
    int low = 0;
    int high = array.size() - 1;

    while (low <= high) {
        int pivotIndex = low + (high - low) / 2;

        if (numberToSearch == array[pivotIndex]) {
            return pivotIndex;
        } else if (numberToSearch > array[pivotIndex]) {
            low = pivotIndex + 1;
        }else if (numberToSearch > array[pivotIndex]) {
            high = pivotIndex - 1;
        }
    }

    return -1;
}

int main() {
    vector<int> arr = { 1, 2, 3, 4, 5, 6, 7 };
    cout << binary_search(arr, 6);

    return 0;
}