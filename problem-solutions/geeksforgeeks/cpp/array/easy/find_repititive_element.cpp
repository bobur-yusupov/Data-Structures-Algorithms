/*

Given an array, arr[], of size n, filled with numbers from 1 to n-1 in random order.
The array has only one repetitive element. Your task is to find the repetitive element.

Note: It is guaranteed that there is a repeating element present in the array

*/
#include <bits/stdc++.h>
using namespace std;

int findTwoElements(vector<int> &array)
{
    int length = array.size();
    int sum = (length * (length - 1)) / 2;

    for (int i = 0; i < length; i++)
    {
        sum -= array[i];
    }

    return abs(sum);
}

int main()
{
    vector<int> arr = {1, 3, 2, 3, 4};

    cout << findTwoElements(arr) << endl;

    return 0;
}