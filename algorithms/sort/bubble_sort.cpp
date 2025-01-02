/*
Bubble sort algorithm

Time complexity: O(n^2)
Space complexity: O(1)
*/
#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &array) {
    int length = array.size();
    bool swapped;

    for (int i = 0; i < length - 1; i++) {

        for (int j = 0; j < length - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }

            swapped = true;
        }

        if (!swapped) break;
    }
}

int main() {
    vector<int> arr = { 6, 8, 1, 3 };

    bubble_sort(arr);

    for (auto elem: arr) {
        cout << elem << " ";
    }
    
    cout << endl;

    return 0;
}