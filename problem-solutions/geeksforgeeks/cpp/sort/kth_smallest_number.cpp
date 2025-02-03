/*

Given an array arr[] and an integer k where k is smaller than the size of the array, 
the task is to find the kth smallest element in the given array.

Follow up: Don't solve it using the inbuilt sort function.

*/

#include <bits/stdc++.h>
using namespace std;

int kthSmallest(vector<int> &arr, int k)
{
    int length = arr.size();

    for (int i = 0; i < length - 1; ++i)
    {
        int min_ind = i;

        for (int j = i + 1; j < length; j++)
        {
            if (arr[j] < arr[min_ind])
            {
                min_ind = j;
            }
        }

        swap(arr[i], arr[min_ind]);
    }

    return arr[k - 1];
}