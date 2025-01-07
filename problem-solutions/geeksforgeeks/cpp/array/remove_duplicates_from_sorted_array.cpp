/*
Time complexity: O(n)
Space complexity: O(1)
 */

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &arr) {
    int length = arr.size();
    int i = 0;
    int size = 1;
        
    for (int i = 1; i < length; i++) {
        if (arr[i] != arr[i - 1]) {
            arr[size] = arr[i];
            size++;
        }
    }
       
    arr.resize(size);
       
    return size;
}
