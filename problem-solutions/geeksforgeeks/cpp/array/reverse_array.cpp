/*
You are given an array of integers arr[]. Your task is to reverse the given array.

Input: arr = [1, 4, 3, 2, 6, 5]
Output: [5, 6, 2, 3, 4, 1]
*/
#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &array) {
    int length = array.size();

    vector<int> temporary_array(length);

    for (int index = 0; index < length; index++) {
        temporary_array[index] = array[length - index - 1];
    }

    for (int index = 0; index < length; index++) {
        array[index] = temporary_array[index];
    }
}

void reverseArray1(vector<int> &array) {
    int length = array.size();
    int i = 0; 
    int j = length - 1;

    while (i < j) {
        swap(array.at(i), array.at(j));

        i++;
        j--;
    }
}

int main() {
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {1, 2, 3, 4, 5, 6};

    reverseArray1(v1);
    reverseArray1(v2);

    for (int elem: v1) {
        cout << elem << " ";
    }

    cout << endl;

    for (int elem: v2) {
        cout << elem << " ";
    }
}