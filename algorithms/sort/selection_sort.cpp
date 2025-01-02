/*
Selection sorting algorithm

Time complexity: O(n^2)
Space complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> &array) {
    int length = array.size();

    for (int i = 0; i < length - 1; ++i) {
        int min_ind = i;
        
        for (int j = i + 1; j < length; ++j) {
            if (array[j] < array[min_ind]) {
                min_ind = j;
            }
        }

        swap(array[i], array[min_ind]);
    }
}

int main() {
    vector<int> arr = { 6, 8, 1, 3 };

    selection_sort(arr);

    for (auto elem: arr) {
        cout << elem << " ";
    }
    
    cout << endl;

    return 0;
}