# Vector

Vector is a dynamic array which can resize itself when an element inserted or deleted.

Example 1

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Create vector of 5 elements
    vector<int> v = {1, 2, 3, 4, 5};

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}

```

Result

```text
1 2 3 4 5
```

Here we can create a vector by following this pattern

```text
vector<Type> name;
```

Here are the thre types of initializing vectors in C++

1 Declare `vector_name` variable as vector

```text
vector<T> vector_name;
```

2 Initialize with default size and value

```text
vector<T> vector_name(size, value);
```

3 Initialize with an initializer array

```text
vector<T> vector_name = { v1, v2, v3, v4, v5 };
```

## Operations in Vectors

### Accessing the element by index

```cpp
vector<int> ages = { 12, 13, 14, 15, 16 };

cout << ages.at(1) << endl; // 13
cout << ages[1] << endl; // 13
```

### Updating the element in a vector

```cpp
vector<char> chars = { 'a', 'b', 'c', 'd'};

chars[3] = 'D';
chars.at(2) = 'F';

cout << chars.at(3) << " " << chars[2] << endl;
```

### Traversing over a vector

```cpp
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

```

### Deleting an element from a vector

```cpp
    vector<char> chars3 = {'a', 'c', 'f', 'd', 'z'};

    chars3.pop_back(); // Deleting the last element
    chars3.erase(find(chars3.begin(), chars3.end(), 'a')); // Deleting 'a' element
    

    for (auto i: chars3) {
        cout << i << " ";
    }

```
