/*

Given two sorted arrays a[] and b[], where each array may contain duplicate elements ,
the task is to return the elements in the union of the two arrays in sorted order.

Union of two arrays can be defined as the set containing distinct common elements that are present in either of the arrays.

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
        if (i > 0 && a[i - 1] == a[i])
        {
            i++;

            continue;
        }

        if (j > 0 && b[j - 1] == b[j]) {
            j++;

            continue;
        }

        if (a[i] == b[j])
        {
            result.push_back(a[i]);

            i++;
            j++;
        }

        else if (a[i] < b[j])
        {
            result.push_back(a[i]);

            i++;
        }
        else
        {
            result.push_back(b[j]);
            j++;
        }
    }

    return result;
}

int main()
{
}