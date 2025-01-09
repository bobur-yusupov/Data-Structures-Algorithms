/*
Given an array of n integers. We need to reduce size of array to one. We are allowed to select
a pair of integers and remove the larger one of these two. 
This decreases the array size by 1. Cost of this operation is equal to value of smaller one. 
Find out minimum sum of costs of operations needed to convert the array into a single element.

Time complexity:
Space complexity:
*/

#include <bits/stdc++.h>
using namespace std;

int cost(vector<int> array) {
    int lengthOfArray = array.size();

    return (lengthOfArray - 1) * (*min_element(array.begin(), array.end()));
}

