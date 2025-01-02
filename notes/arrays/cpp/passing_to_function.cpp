#include <bits/stdc++.h>
using namespace std;

int sum_vector(vector<int> vec) {

    int sum = 0;

    for (auto number = vec.begin(); number != vec.end(); ++number) {
        sum += *number;
    }

    return sum;
}

int product_vector(vector<int> &vec) {
    int product = 1;

    for (auto number: vec) {
        product *= number;
    }

    return product;
}

int max_number(vector<int> *vec) {
    int max_num = INT_MIN;

    for (int i = 0; i < vec->size(); i++) {
        if (max_num < vec->at(i)) {
            max_num = vec->at(i);
        }
    }

    return max_num;
}

int main() {
    vector<int> numbers = { 20, 12, 43, 56, 19 };

    cout << sum_vector(numbers) << endl; // Sum of elements of a vector: 150

    cout << product_vector(numbers)  << endl; // Product of elements of a vector: 10980480

    cout << max_number(&numbers) << endl; // The maximum number in a vector: 56

    return 0;
}