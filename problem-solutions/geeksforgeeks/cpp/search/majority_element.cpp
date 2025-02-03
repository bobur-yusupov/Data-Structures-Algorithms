/*
Given an array arr. Find the majority element in the array. If no majority exists, return -1.

A majority element in an array is an element that appears strictly more than arr.size()/2 times in the array.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElement(vector<int> &arr)
{
    int length = arr.size();

    sort(arr.begin(), arr.end());

    int i = 0, j = 1;

    int target = length / 2;

    while (j < length)
    {
        if (arr[i] == arr[j])
        {
            j++;
        }
        else
        {
            if (j - i > target)
            {
                return arr[i];
            }
            i = j;
            j++;
        }
    }

    if (j - i > target)
    {
        return arr[i];
    }

    return -1;
}