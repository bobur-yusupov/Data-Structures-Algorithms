/*

Given an array arr. Find the sum of all subarrays of the array since the sum could be very large print the sum modulo (109+7).

Time complexity:
Space complexity:

*/

#include <bits/stdc++.h>
using namespace std;

int sumOfSubarrays(vector<int> array) {
    int length = array.size();
    int sum = 0;
    int mod = 1e9 + 7;

    for (int i = 0; i < length; i++) {
        long long contribution = (1LL * array[i] * (i + 1) % mod * (length - i) % mod) % mod;
        sum = (sum + contribution) % mod;
    }

    return sum;
}