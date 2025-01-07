#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int> &arr) {
    int max_current = arr[0];
    int max_global = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        max_current = max(max_current, max_current+arr[i]);

        max_global = max(max_current, max_global);
    }

    return max_global;
}

int main() {
    vector<int> arr = {1, 2, 3, -2, 5};

    cout << maxSubarraySum(arr);
    
}