#include <bits/stdc++.h>
using namespace std;

bool isSubsetSum(vector<int>& arr, int sum) {
    if (sum == 0) {
        return true;
    }

    if (arr.size() == 0) {
        return false;
    }

    vector<int> subarray(arr.begin() + 1, arr.end());

    return isSubsetSum(subarray, sum - arr[0]) || isSubsetSum(subarray, sum);
}