/*

Given an array arr[] of positive integers, where each value represents the number of chocolates in a packet.
Each packet can have a variable number of chocolates.
There are m students, the task is to distribute chocolate packets among m students such that -
    i. Each student gets exactly one packet.
    ii. The difference between maximum number of chocolates given to a student and minimum number of chocolates
    given to a student is minimum and return that minimum possible difference.


Time complexity:
Space complexity:

*/

#include <bits/stdc++.h>
using namespace std;

int findMinDiff(vector<int> &a, int m)
{
    int length = a.size();

    sort(a.begin(), a.end());

    int minimum = INT_MAX;

    for (int i = 0; i + m - 1 < length; i++) {
        minimum = min(minimum, a[i + m - 1] - a[i]);
    }

    return minimum;
}

int main() {
    vector<int> arr = {3, 4, 1, 9, 56, 7, 9, 12};

    cout << findMinDiff(arr, 5) << endl;

    return 0;
}