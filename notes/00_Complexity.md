# Complexity

## What is complexity?

Complexity refers to how much computer resources a solution requires. In algorithms there are two types of complexities are common: **time complexity**(execution time) and **space complexity**(memory usage).

- Time complexity measures how long it takes to execute certain operations on a data structure, for example insertion, deletion or sorting.
- Space complexity measures how much memory or storage it takes to store a data structure.

Both complexities depends on **n** - length of an input.

## How to express complexity?

We use asymptotic notations to measure complexity of a data structure: **Big-O notation**, **Big Theta notation**, and **Big Omega notation**.

## Big-O notation

Big-O notation is used to express time and space complexity of an algorithm and data structure. **Big-O notation** is upper bound or worst-case complexity, indicating the most amount of time or memory required by an algorithm to a given input size.

#### Examples

- O(n) means complexity is proportional to n
- O(n^2) means complexity is proprotonal to n square
- O(log n) means complexity is proportional to logarithm of n.

#### Code example to O(n). Simple Search

**Python**

~~~python
# Python code

from typing import List

#Define a list of numbers to search through

numbers: List[int] = [1, 8, 3, 2, 9]

#Loop through each number in the list

for number in numbers:
    if number == 2:  # Check if the current number is the target
        print(number)  # If found, print the number

~~~

**C++**

~~~

// C++ code

#include <iostream>
using namespace std;

int main() {
    // Define an array of numbers to search through
    int numbers[5] = {1, 8, 3, 2, 9};

    // Loop through each element in the array
    for (int i = 0; i < 5; i++) {
        if (numbers[i] == 2) {  // Check if the current element is the target
            cout << numbers[i] << endl;  // If found, print the number
        }
    }

    return 0;
}


~~~

In the linear search example, each number in `numbers` array is checked one-by-one to see if it matches to target, resulting O(n) time complexity.

The size of the input (size of `numbers` array) does not affect memory used by the code itself; only a constant amount of memory is needed, hence O(1) space complexity.

## Why we need to concern on complexity?

In the example above, the array numbers has only 5 elements, which modern computers can process almost instantly. However, consider an array with millions, billions, or even trillions of elements. As the dataset grows, the time required to execute an operation increases significantly, and for certain algorithms, it can reach impractical lengths — hours, days, or even years.

#### Why Complexity Matters

As datasets expand, algorithm efficiency becomes crucial. An inefficient algorithm may run acceptably on small inputs, but on large inputs, it can become too slow or require excessive memory. When we talk about **Big-O**, we’re often considering scenarios like these, where we need algorithms that remain feasible as input sizes scale. Understanding complexity helps us select or design algorithms that handle large data efficiently, making them suitable for real-world applications, such as:

- **Search engines** that handle millions of queries and billions of webpages. For example Google and Bing
- **Social media platforms** that manage massive user data and interactions in real-time.
- **Machine learning applications** that analyze vast datasets to produce quick predictions.
