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

## Base case and recursive case

Recursion can run for entire life. For example let's say we are writing a program which countdown from **n** to 1using recursion.

```python
def count(n):
    print(n)

    count(n - 1)
```

```cpp
#include <iostream>
using namespace std;

int count(int n) {
    cout << n << endl;

    return count(n - 1);
}
```

Output

```text
n
.
.
.
3
2
1
0
-1
-2
-3
...
```

However this program does not stop and runs for ever.

We need **Base case** where we specify when recursion stops.

Python

```python
def count(n):
    # Base case
    if (n==1):
        print(1)
        return

    # Recursive case
    else:
        print(n)
        return count(n-1)

```

C++

```cpp
#include <iostream>

void count(int n) { 
    if (n == 1) { // base case

        std::cout << n << std::endl;
    
    } else { // recursive case

        std::cout << n << std::endl; 
        count(n - 1);
    
    }
}

int main() {
    count(5);

    return 0;
}
```

Output

```text
5
4
3
2
1
```

here is the [C++ code](./base_case.cpp).
