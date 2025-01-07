/* Given an array arr. Your task is to find the minimum and maximum elements in the array.

Note: Return a Pair that contains two elements the first one will be a minimum element and the second will be a maximum.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maximumNumber(vector<int> *numbers) {
        int maximum_number = numbers->at(0);
    
        for (int i = 0; i < numbers->size(); i++) {
            if (maximum_number < numbers->at(i)) {
                maximum_number = numbers->at(i);
            }
        }
    
        return maximum_number;
    }

    int minimumNumber(vector<int> *numbers) {
        int minimum_number = numbers->at(0);
    
        for (int i = 0; i < numbers->size(); i++) {
            if (minimum_number > numbers->at(i)) {
                minimum_number = numbers->at(i);
            }
        }
    
        return minimum_number;
    }
  
    pair<int, int> getMinMax(vector<int> arr) {
        int maximum_number_in_arr = maximumNumber(&arr);
        int minimum_number_in_arr = minimumNumber(&arr);
        
        return make_pair(minimum_number_in_arr, maximum_number_in_arr);
    }
};