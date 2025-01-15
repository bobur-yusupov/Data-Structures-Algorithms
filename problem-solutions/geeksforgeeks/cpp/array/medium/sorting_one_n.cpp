/*

Given an array arr[] of size n consisting of distinct integers from 1 to n. Your task is to sort the array without using extra space
Challenge: Try to solve it using linear time complexity.

Time complexity: O(n)
Space complexity: O(1)

 */

#include <bits/stdc++.h>
using namespace std;

vector<int> sortArray(vector<int> &arr)
{
    int length = arr.size();
    int i = 0;

    while (i < length)
    {
        if (arr[i] != i + 1)
        {
            swap(arr[i], arr[arr[i] - 1]);
        }
        else
        {
            i++;
        }
    }

    return arr;
}