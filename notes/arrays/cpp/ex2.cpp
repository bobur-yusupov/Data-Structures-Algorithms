#include <bits/stdc++.h>
using namespace std;

void printV(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << endl;
}

int main() {

    // declare a v1 vector
    vector<int> v1;

    // Create a vector v2 by initializer list
    vector<int> v2 = {1, 2, 3, 4, 5};

    // Create a vector with default value 9 and size 5
    vector<int> v3(5, 9);

    printV(v1);
    printV(v2);
    printV(v3);

    return 0;
}