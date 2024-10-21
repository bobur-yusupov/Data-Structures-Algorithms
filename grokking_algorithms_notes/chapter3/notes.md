# Section 3

## Recursion

Let's imagine a Russian Matryoshka dolls. Matryoshka is a set of dolls which are nested into bigger one. When you open the first one you see another smaller doll, open again and again until you reach the smallest one. This experience is a simple example of recursion in real life.

In programming recursion refers to calling function into itself with different parameters until certain condition meet.

Let's start by a simple code example in Python and C++. We are given an integer (n > 1). We need to find its factorial. For example

```text
5! = 5 * 4 * 3 * 2 * 1 = 120
```

We can embrace the power of recursion here.

```python

def factorial(n: int, result: int = 1) -> int:
    if n == 1:
        return result
    
    else:
        result = result * n
        return factorial(n-1, result)

```

or you can access Python file from [here](./recursion.py)

```cpp
#include <iostream>

int factorial(int n, int result=1) {
    if (n == 1) {
        return result;
    } else {
        result = result * n;
        return factorial(n-1, result);
    }
}

int main() {

    int number = 5;

    int result = factorial(number);

    std::cout << result << std::endl;

    return 0;
}
```

Here is C++ example. We can compare two languages. There is almost same logic. Only difference is in their syntax.
