/*

Given an array arr[] of integers, the task is to partition the array based on even and odd elements.
The partition has to be stable, meaning the relative ordering of all even elements must remain the same before and after partitioning,
and the same should hold true for all odd elements.

Note: For a binary array (containing only 0s and 1s), this partition process is equivalent to sorting the array.

Time complexity: O(n)
Space complexity: O(1)

*/

#include <bits/stdc++.h>
using namespace std;

void segregate0and1(vector<int> &arr)
{
    int left = 0;
    int right = arr.size() - 1;

    while (left < right)
    {
        while (arr[left] == 0 and left < right)
        {
            left++;
        }

        while (arr[right] == 1 and left < right)
        {
            right--;
        }

        if (left < right)
        {
            swap(arr[left], arr[right]);

            left++;
            right--;
        }
    }
}
