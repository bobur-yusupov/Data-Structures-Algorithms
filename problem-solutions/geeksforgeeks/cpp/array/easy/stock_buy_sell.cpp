/*

The cost of stock on each day is given in an array price[]. 
Each day you may decide to either buy or sell the stock i at price[i], you can even buy and sell the stock on the same day. 
Find the maximum profit that you can get.

Note: A stock can only be sold if it has been bought previously and multiple stocks cannot be held on any given day.

Time complexity:
Space complexity:

*/

#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &array) {
    int length = array.size();

    int peak = 0;
    int valley = 0;

    int sum = 0;
    int i = 0;

    while (i < length - 1) {
        while (array[i] >= array[i + 1] && i < length - 1) {
            i ++;
        }

        valley = array[i];

        while (array[i] <= array[i + 1] && i < length - 1) {
            i ++;
        }

        peak = array[i];

        sum += peak - valley;

    }

    return sum;
}

int maxProfitting(vector<int> &prices) {
    int sum = 0;

    for (int i = 1; i < prices.size(); i++) {
        if (prices[i] > prices[i - 1]) {
            sum += (prices[i] - prices[i - 1]);
        }
    }

    return sum;
}

int main() {
    vector<int> arr = { 100, 180, 260, 310, 40, 535, 695 };

    cout << maxProfitting(arr) << endl;

    return 0;
}