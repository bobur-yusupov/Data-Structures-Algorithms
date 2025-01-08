/*

You are given an array arr[] of non-negative integers. 
Your task is to move all the zeros in the array to the right end while maintaining the relative order of the non-zero elements. 
The operation must be performed in place, meaning you should not use extra space for another array.

Time complexity: 
Space complexity: 

*/

#include <bits/stdc++.h>
using namespace std;

void move_zeros(vector<int> &array) {
    int length = array.size();
    int count = 0;

    for (int i = 0; i < length; i++) {
        if (array[i] != 0) {
            array[count] = array[i];
            count++;
        }
    }

    while (count < length) {
        array[count] = 0;

        count++;
    }
}

void move_zeros1(vector<int> &array) {
    int length = array.size();
    int count = 0;

    for (int i = 0; i < length - 1; i++) {
        if (array[i] != 0) {
            swap(array[count++], array[i]);
        }
    }
}


int main() {
    vector<int> v = {1, 0, 0, 2, 3, 0};

    move_zeros1(v);

    for (int elem: v) {
        cout << elem << " ";
    }

    cout << endl;
}