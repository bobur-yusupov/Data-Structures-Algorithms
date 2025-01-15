/*

Given an array arr[] that contains positive and negative integers (may contain 0 as well). 
Find the maximum product that we can get in a subarray of arr[].

Note: It is guaranteed that the output fits in a 32-bit integer.

Time complexity: O(n)
Space complexity: O(1)

*/


int maxProduct(vector<int> &arr)
{
    int prodMax = arr[0];
    int prodMin = arr[0];
    int maxProd = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        int temp = max({arr[i], prodMax * arr[i], prodMin * arr[i]});

        prodMin = min({arr[i], arr[i] * prodMin, arr[i] * prodMax});

        prodMax = temp;

        maxProd = max(maxProd, prodMax);
    }

    return maxProd;
}