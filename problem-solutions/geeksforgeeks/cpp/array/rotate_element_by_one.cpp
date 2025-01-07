/*
Given an array arr, rotate the array by one position in clockwise direction.
*/

#include <bits/stdc++.h>
using namespace std;

void rotate1(vector<int> &array) {
    int length = array.size();
    if (length == 0) return;

    int last_element = array[length - 1];


    for (int index = length - 1; index > 0; index--) {
        array[index] = array[index - 1];
    }

    array[0] = last_element;
}

void rotate(vector<int> &array) {
    int length = array.size();

    int i = 0, j = length - 1;

    while (i != length) {
        swap(array[i], array[j]);

        i++;
    }
}

int main() {
    vector<int> vector = { 10, 20, 30, 40 };

    rotate(vector);

    for (auto elem : vector) {
        cout << elem << " "; 
    }
}