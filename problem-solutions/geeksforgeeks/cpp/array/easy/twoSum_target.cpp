/*

Given an array arr[] of positive integers and another integer target. 
Determine if there exists two distinct indices such that the sum of there elements is equals to target.

*/
#include <bits/stdc++.h>
using namespace std;

bool twoSum(vector<int> &arr, int target)
{
    sort(arr.begin(), arr.end());

    int i = 0;
    int j = arr.size() - 1;

    while (i < j)
    {
        if (arr[i] + arr[j] == target)
        {
            return true;
        }

        if (arr[i] + arr[j] > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    return false;
}