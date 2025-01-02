#include <bits/stdc++.h>
using namespace std;

int main() {
    // Accessing members of a vector
    vector<int> ages = { 12, 13, 14, 15, 16 };

    cout << ages.at(1) << endl; // 13
    cout << ages[1] << endl; // 13

    // Updating members of a vector
    vector<char> chars = { 'a', 'b', 'c', 'd'};

    chars[3] = 'D';
    chars.at(2) = 'F';

    cout << chars.at(3) << " " << chars[2] << endl;

    // Traversing over a vector
    vector<char> chars1 = {'a', 'c', 'f', 'd', 'z'};

    for (int i = 0; i < chars1.size(); i++) {
        cout << chars1[i] << " ";
    }
    cout << endl;

    // Inserting a new element
    vector<char> chars2 = {'a', 'c', 'f', 'd', 'z'};

    chars2.push_back('y'); // add a new element at the end of a vector
    chars2.insert(chars2.begin() + 1, 'b'); // inserting a new element at index 1

    for (auto i: chars2) {
        cout << i << " ";
    }

    cout << endl;

    // Deleting elements
    vector<char> chars3 = {'a', 'c', 'f', 'd', 'z'};

    chars3.pop_back(); // Deleting the last element
    chars3.erase(find(chars3.begin(), chars3.end(), 'a')); // Deleting 'a' element
    

    for (auto i: chars3) {
        cout << i << " ";
    }

    return 0;
}