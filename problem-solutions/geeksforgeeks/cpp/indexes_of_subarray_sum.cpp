#include <bits/stdc++.h>
using namespace std;

vector<int> subarraySum(vector<int> &arr, int target) {
    int length = arr.size();
    int current_sum = 0;
    int start = 0;
    
    for (int end = 0; end < length; end++) {
        current_sum += arr[end];
    
        while (target < current_sum && start <= end) {
            current_sum -= arr[start];
            start++;
        }
    
        if (target == current_sum) {
            return {start + 1, end + 1};
        }
    }
            
            
    return { -1 };
}