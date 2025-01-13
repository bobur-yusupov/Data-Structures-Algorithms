/*

Given an array arr[] of size n-1 with integers in the range of [1, n], the task is to find the missing number from the first n integers.

Note: There are no duplicates in the list.

*/
#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &arr)
{
    int sum = 0;

    for (int i = 1; i <= arr.size() + 1; i++) {
        sum += i;

        if (i <= arr.size()) {
            sum -= arr[i - 1];
        }
    }

    return sum;

}

void testMissingNumber()
{
    vector<vector<int>> testCases = {
        {1, 2, 4, 5, 6}, // Missing 3
        {1, 2, 3, 4, 5}, // No missing number
        {2, 3, 4, 5, 6}, // Missing 1
        {1},             // No missing number
    };

    vector<int> expectedResults = {3, -1, 1, -1, 102, -1, -1};

    for (size_t i = 0; i < testCases.size(); i++)
    {
        int result = missingNumber(testCases[i]);
        cout << "Test case " << i + 1 << ": ";
        if (result == expectedResults[i])
        {
            cout << "Passed" << endl;
        }
        else
        {
            cout << "Failed (Expected " << expectedResults[i] << ", got " << result << ")" << endl;
        }
    }
}

int main()
{
    testMissingNumber();

    return 0;
}