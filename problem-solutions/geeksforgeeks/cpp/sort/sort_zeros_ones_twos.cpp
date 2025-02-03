/*

Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.

*/

#include <bits/stdc++.h>
using namespace std;

void sort012(vector<int> &arr)
{
    int length = arr.size();

    int low = 0, mid = 0, high = length - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);

            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}