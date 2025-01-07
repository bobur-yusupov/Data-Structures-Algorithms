/*
Given an array, arr[], generate all possible subarrays using recursion and return them as a vector of vectors.
The subarrays must be returned in the following order:
1. Subarrays starting from the first element, followed by subarrays starting from the second element, and so on.
2. For each starting index, subarrays should be in increasing length.
*/
#include <iostream>
#include <vector>
using namespace std;

void subArray(vector<int> &arr, vector<vector<int>> *result) {
    int length = arr.size();

    for (int i = 0; i < length; i++) {

        for (int j = i; j < length; j++) {
            vector<int> v;

            for (int k = i; k <= j; k++) {
                v.push_back(arr[k]);
            }

            result->push_back(v);
        }
    }
}


int main() {
    vector<int> array = { 1, 2, 3 };
    vector<vector<int>> res;
    
    subArray(array, &res);

    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}