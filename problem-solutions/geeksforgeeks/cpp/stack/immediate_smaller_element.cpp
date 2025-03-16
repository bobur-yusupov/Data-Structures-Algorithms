#include <bits/stdc++.h>
using namespace std;

void immediateSmaller(vector<int>& arr) {
    int n = arr.size();
    
    for (int i = 0; i < n - 1; i++) {
        arr[i] = (arr[i] > arr[i + 1]) ? arr[i + 1] : -1;
    }
    
    arr[n - 1] = -1;
}
