/*
Given an array of positive integers arr[], return the second largest element from the array. 
If the second largest element doesn't exist then return -1.

Note: The second largest element should not be equal to the largest element.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getSecondLargest(vector<int> &arr)
{
    int length = arr.size();

    sort(arr.begin(), arr.end());

    int first_largest = arr[length - 1];
    int i = 1;

    while (arr[length - i] == first_largest && i <= length)
    {
        i++;
    }

    if (i > length)
    {
        return -1;
    }

    return arr[length - i];
}