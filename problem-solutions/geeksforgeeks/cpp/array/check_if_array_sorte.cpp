/*
Given an array arr[], check whether it is sorted in non-decreasing order. Return true if it is sorted otherwise false.

I used while loop to check if the array is sorted or not. If the array is sorted then I return true otherwise false.
 */

#include <iostream>
#include <vector>
using namespace std;

bool arrayIsSortedOrNot(vector<int> &arr) {
    int length = arr.size();
    int i = 0;

    while (i < length - 1) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }

        i++;
    }

    return true;
}

bool isSorted(vector<int> &arr, int n) {
    if (n == 1 || n == 0) {
        return true;
    }

    return arr[n - 1] >= arr[n - 2] && isSorted(arr, n - 1);
}

int main() {
    vector<int> array = { 10, 60, 30 };

    if (isSorted(array, array.size())) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}