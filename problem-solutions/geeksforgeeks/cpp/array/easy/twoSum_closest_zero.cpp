/*

Given an integer array of N elements. You need to find the maximum sum of two elements such that sum is closest to zero.

*/

#include <bits/stdc++.h>
using namespace std;

int closestToZero(int arr[], int n)
{
    sort(arr, arr + n);

    int i = 0;
    int j = n - 1;

    int sum = arr[i] + arr[j];
    int diff = abs(sum);

    while (i < j)
    {
        int temp_sum = arr[i] + arr[j];

        if (temp_sum == 0)
        {
            return 0;
        }

        if (abs(temp_sum) < abs(diff))
        {
            diff = abs(temp_sum);
            sum = temp_sum;
        }
        else if (abs(temp_sum) == abs(diff))
        {
            sum = max(temp_sum, sum);
        }

        if (temp_sum > 0)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    return sum;
}
