/*

Given two sorted arrays a[] and b[], where each array may contain duplicate elements ,
the task is to return the elements in the intersection of the two arrays in sorted order.

Intersection of two arrays can be defined as the set containing distinct common elements that are present in both of the arrays.

*/

#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> &a, vector<int> &b)
{
    int lengthA = a.size();
    int lengthB = b.size();

    int i = 0;
    int j = 0;

    vector<int> result;

    while (i < lengthA && j < lengthB)
    {
        if (a[i] == b[j])
        {
            result.push_back(a[i]);

            i++;
            j++;
        }

        else if (a[i] < b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    return result;
}

int main()
{
}