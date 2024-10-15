# Arrays

---

## Array is a linear data structure to store same-type elements sequentially

### Example of array

#### Python

```python
from typing import List

sample_list: List[int] = [1, 5, 2, 10]
```

#### C++

```cpp
int sampleList[4] = {1, 5, 2, 10};
```

You can see further examples here
[Python](../examples/python/arrays.py) and [C++](../examples/cpp/arrays.cpp)

As stated array is the collection of elements with a same type (e.g, `int`) stored sequentally in memory. Each element of array can be accessed through its `index`. Indexes start from 0 until `length of array - 1`. For example, to access the first element, 1, in the array sampleList, you would use `sampleList[0]`. To access the last element, `10`, you would use `sampleList[3]` because the indices start from `0`, so the index of the last element is length of array `-1`.
