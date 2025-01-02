// Traversing over a vector in C++

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    // Using index with loop
    for (auto i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << endl;

    // Using iterator with loop

    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }

    cout << endl;

    // Using reverse iterators

    for (auto it = v.rbegin(); it != v.rend(); ++it) {
        cout << *it << " ";
    }

    cout << endl;

    return 0;
}