/*

Insertion sorting algorithm

Time Complexity:
Space Complexity:

 */

#include <bits/stdc++.h>
using namespace std;

/**
 * Time complexity: O(n^2)
 * Space complexity: O(1)
 */

void insertion_sort(vector<int> *array) {
    int length = array->size();

    for (int i = 1; i < length; i++) {
        int pos = i;
        for (int j = i - 1; j >= 0; j--) {
            if (array->at(pos) < array->at(j)) {
                swap(array->at(pos), array->at(j));
                pos--;
            }
        }
    }
}

void insertionsort(vector<int> *array) {
    int length = array->size();

    for (int i = 1; i < length; i++) {
        int key = array->at(i);
        int j = i - 1;

        while (j >= 0 && array->at(j) > key) {
            array->at(j + 1) = array->at(j);
            j = j - 1;
        }

        array->at(j + 1) = key;

    }
}

int main() {
    vector<int> arr = { 2, 0, 12, -1, 19, -49, 11, -1 };

    insertionsort(&arr);

    for (auto elem: arr) {
        cout << elem << " ";
    }

    cout << endl;
}