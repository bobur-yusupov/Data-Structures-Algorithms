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
