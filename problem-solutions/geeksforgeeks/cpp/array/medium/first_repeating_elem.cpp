/*

Given an array arr[], find the first repeating element. 
The element should occur more than once and the index of its first occurrence should be the smallest.

Note:- The position you return should be according to 1-based indexing.

*/

#include <bits/stdc++.h>
using namespace std;

int firstRepeated(vector<int> &arr)
{
    int length = arr.size();

    int minInx = INT_MAX;

    unordered_set<int> hashSet;

    for (int i = length - 1; i >= 0; i--)
    {
        if (hashSet.find(arr[i]) != hashSet.end())
        {
            minInx = min(minInx, i + 1);
        }

        hashSet.insert(arr[i]);
    }

    return minInx == INT_MAX ? -1 : minInx;
}