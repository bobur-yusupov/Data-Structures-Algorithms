/*

Given an array of integers arr[], the task is to find the first equilibrium point in the array.

The equilibrium point in an array is an index (0-based indexing) such that the sum of all elements before that index is the same as the sum of elements after it. Return -1 if no such point exists. 
 */

#include <bits/stdc++.h>
using namespace std;

int findEquilibrium(vector<int> &arr)
{
    int sum = 0;

    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }

    int init_sum = 0;

    for (int i = 0; i < arr.size(); i++) {
        sum -= arr[i];

        if (sum == init_sum) {
            return i;
        }

        init_sum += arr[i];
    }

    return -1;
}