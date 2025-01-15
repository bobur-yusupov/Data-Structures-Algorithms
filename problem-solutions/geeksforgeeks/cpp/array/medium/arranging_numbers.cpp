/*

Given a permutation of size n. The range of values for the array elements is from 0 to n-1. 
All elements may not be present in the array. If the element is not present then there will be -1 present in the array. 
Rearrange the array such that arr[i] = i and if arr[i] is not present then -1 at that place. Index i is 0-based.

 */

#include <bits/stdc++.h>
using namespace std;

void modifyArray(vector<int> &arr)
{
    int length = arr.size();
    int i = 0;

    while (i < length)
    {
        if (arr[i] != -1 && arr[i] != arr[arr[i]])
        {
            swap(arr[i], arr[arr[i]]);
        }
        else
        {
            i++;
        }
    }
}