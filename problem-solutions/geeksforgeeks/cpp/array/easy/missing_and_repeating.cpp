/*

Given an unsorted array arr of positive integers.
One number a from the set [1, 2,....,n] is missing and one number b occurs twice in the array.
Find numbers a and b.

Note: The test cases are generated such that there always exists one missing and one repeating number within the range [1,n].

Time complexity:
Space complexity:

*/

#include <bits/stdc++.h>
using namespace std;

vector<int> findTwoElements(vector<int> &array)
{
    int length = array.size();
    long long sum = ((length + 1) * length) / 2;
    int duplicate = 0;

    for (int i = 0; i < array.size(); i++)
    {
        int index = abs(array[i]) - 1;

        if (array[index] < 0)
        {
            duplicate = abs(array[i]);
        }
        else
        {
            array[index] = -array[index];
            sum -= abs(array[i]);
        }
    }

    return {(int)sum, duplicate};
}

int main()
{
    vector<int> arr = {6, 5, 8, 7, 1, 4, 1, 3, 2 };
    vector<int> result = findTwoElements(arr);

    cout << result[0] << " " << result[1] << endl;

    return 0;
}