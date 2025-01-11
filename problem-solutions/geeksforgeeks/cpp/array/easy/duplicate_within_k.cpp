/*

Given an unsorted array that may contain duplicates. Also given a number k which is smaller than the size of the array.
Write a function that returns true if the array contains duplicates within k distance.

*/
#include <bits/stdc++.h>
using namespace std;

bool checkDuplicatesWithinK(vector<int> &arr, int k)
{
    int start = 0;
    int end = 1;

    while (start < arr.size()) {
        if (arr[start] == arr[end]) {
            if (end - start == k) {
                return true;
            }
        }
        start ++;
        if (end + 1 == arr.size()) {
            end = start;
        }
    }

    return false;

}

bool checkDuplicatesWithinK1(vector<int> &arr, int k)
{
    unordered_set<int> integerSet;

    for (int i = 0; i < arr.size(); i++) {
        if (integerSet.find(arr[i]) != integerSet.end()) {
            return true;
        }

        integerSet.insert(arr[i]);

        if (i >= k) {
            integerSet.erase(arr[i - k]);
        }
    }

    return false;

}