/*
Quick sorting algorithm

Time complexity:
Space complexity:
 */

#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> *array, int low, int high) {
    int pivot = array->at(high);

    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (array->at(j) < pivot) {
            i++;
            swap(array->at(i), array->at(j));
        }
    }

    swap(array->at(i + 1), array->at(high));

    return i + 1;
}

void quicksort(vector<int> *array, int low, int high) {
    if (low < high) {
        int pi = partition(array, low, high);

        quicksort(array, low, pi - 1);
        quicksort(array, pi + 1, high);
    }
}

int main() {
    vector<int> arr = { 1, 7, 2, 0 };
    int length = arr.size();

    quicksort(&arr, 0, length - 1);

    for (auto elem: arr) {
        cout << elem << " ";
    }

    cout << endl;
}