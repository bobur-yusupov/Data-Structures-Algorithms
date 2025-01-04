#include <bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> *array) {
    int length = array->size();

    for (int i = 0; i < length; i++) {
        int min_index = i;

        for (int j = i + 1; j < length; j++) {
            if (array->at(min_index) > array->at(j)) {
                min_index = j;
            }
        }

        swap(array->at(i), array->at(min_index));
    }
}

void bubble_sort(vector<int> *array) {
    int length = array->size();
    bool swapped;

    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (array->at(j) > array->at(j+1)) {
                swap(array->at(j), array->at(j+1));
            }
            
            swapped = true;
        }

        if (!swapped) break;
    }
}

int main() {
    vector<int> arr = {5, 2, 12, 100, 23, 0, -12, 122};

    for (auto elem: arr) {
        cout << elem << " ";
    }

    cout << endl;

    bubble_sort(&arr);

    for (auto elem: arr) {
        cout << elem << " ";
    }

    cout << endl;
}