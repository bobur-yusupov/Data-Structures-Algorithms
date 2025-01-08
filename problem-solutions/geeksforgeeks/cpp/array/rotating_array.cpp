/*
Algorithm to rotate elements of a vector clockwise and counter clockwise

Time complexity: O(d*n) and O(n)
Space complexity: O(1)

*/

#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &array, int d) {
    int length = array.size();

    for (int i = 0; i < d; i++) {
        int last_element = array[length - 1];

        for (int j = length - 1; j > 0; j--) {
            array[j] = array[j - 1];
        }

        array[0] = last_element;
    }
}

void rotate1(vector<int> &array, int d) {
    int length = array.size();

    for (int i = 0; i < d; i++) {
        int first_element = array[0];

        for (int j = 1; j < length; j++) {
            array[j - 1] = array[j];
        }

        array[length - 1] = first_element;
    }
}

void rotate2(vector<int> &array, int d) {
    int length = array.size();

    d %= length;

    reverse(array.begin(), array.end());
    reverse(array.begin(), array.begin() + length - d);
    reverse(array.begin() + length - d, array.end());
}

int main() {
    vector<int> arr = { 10 };

    rotate2(arr, 101);

    for (int elem: arr) {
        cout << elem << " ";
    }

    return 0;
}