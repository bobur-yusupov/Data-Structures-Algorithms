/*

You are given an array arr[], the task is to reverse the array elements in-place by using a stack.

*/

#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int>& arr) {

    stack<int> numStack;
    
    for (int num : arr) {
        numStack.push(num);
    }
    // Reverse the array
    for (int& num : arr) {
        num = numStack.top();
        numStack.pop();
    }
}
