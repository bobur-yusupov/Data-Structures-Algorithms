/*

Given an array, arr of n integers, and an integer element x, find whether element x is present in the array. 
Return the index of the first occurrence of x in the array, or -1 if it doesn't exist.

 */

#include <bits/stdc++.h>
using namespace std;

/*
Solution time complexity: O(n)
Solution space complexity: O(1)
*/
class Solution {
  public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    int search(vector<int>& arr, int x) {

        int n = arr.size();
        
        for (int i = 0; i < n; i ++) {
            if (arr[i] == x) {
                return i;
            }
        }
        
        return -1;
    }
};

int main() {
    int testcases;
    cin >> testcases;
    cin.ignore();
    while (testcases--) {
        vector<int> arr;
        int x;
        string input;

        getline(cin, input); 
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        getline(cin, input);
        stringstream ss2(input);
        ss2 >> x;

        Solution ob;
        cout << ob.search(arr, x) << endl; 
        cout << '~' << endl;
    }

    return 0;
}
// } Driver Code Ends