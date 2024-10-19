# Chapter 1: Introduction to Algorithms

## Binary search algorithm

It is a searching algorithm for effetively searches for targeted element from an array. Lets assume we are searching for number `50` in a sorted array, but difference between elements are not equal. `50` might be at the beginning or at the middle or at the end.

```python
# At the beginning
array1 = [50, 60, 65, 74, 98, 100]

# At the middle
array2 = [12, 18, 21, 29, 30, 48, 50, 90, 93, 98, 100]

# At the end
array3 = [10, 12, 22, 28, 45, 49, 50]

```

For the first array computer can easily find `50` however in second and third cases it may take a longer time depending on the length of the array. As the number of data points grow in databases we will need more optimal solutions to find a data among millions of records. We can embrace power of binary search algorithm where we can search for an element in a **sorted** array as above.

## How binary search works?

Let's dive deeper into binary search. How it actually works? Lets assume I need to find 675th page among 1000 page book. If I start iterating from the first page to 675th, 1 second per one, it takes more than 10 minutes to find 675th page. If the target is 875, it is almost 15 minutes. As I am smart, I do not use this method. Instead I open random page and check whether it is higher than or less than 675. If it is higher I do not open rest of the book, instead random page previous pages. Same operation goes until I find 675. It may take only 10 seconds to find 675 and it is better than spending 11 minutes of turning pages.

>[!WARNING]
>Binary search works only in sorted lists. For example names of people in alphabetic order.

Here you can find [Python](./binary_search1.py) example of binary search implementation.

In the Python code I wrote a code which also checks the runtime of both methods, binary search and simple search. When I tried to find `53` it took `0.0003` in binary search and `0.0007` in iteration. It may does not make sense in a small projects but in systems with thousands of requests per second it shows its result.
