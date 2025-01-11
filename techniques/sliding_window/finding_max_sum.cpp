/*

Using Sliding Window technique we need to calculate maximum sum of subarray with exactly k elements

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> array = { 1, 5, 2, 9, 12 };

    int sum = 0;
    int maximum_sum = INT16_MIN;
    int k = 3;

    int start = 0;
    int end = k - 1;

    for (int i = start; i <= end; i++) {
        sum += array[i];
    }

    maximum_sum = sum;

    while (end < array.size()) {
        sum += array[end] - array[start];

        maximum_sum = max(sum, maximum_sum);

        start++;
        end++;
    }

    cout << maximum_sum << endl;

    return 0;
}