# Problemset 0

## Problem 0-1

Let \(A = \{i + \frac{5!}{i!(5-i)!}, \quad i ∈ Z \quad and \quad 0 ≤ i ≤ 4\}\) and \(B = \{3i | i ∈ {1, 2, 4, 5}\}\).
Evaluate:
(a) A ∩ B  
(b) |A ∪ B|
(c) |A − B|

### Solution for 0-1 a

Before all we need to find the elements of A and B.
\[
    A = \{1, 6, 12, 13, 9\} \\
    B = \{3, 6, 12, 15\}
\]

The intersection of A and B is the set of elements that are in both A and B.
\[
    A ∩ B = \{6, 12\}
\]

### Solution for 0-1 b

The number of elements in the union of A and B is the sum of the number of elements in A and B minus the number of elements in the intersection of A and B.

\[
    |A ∪ B| = |A| + |B| - |A ∩ B| = 5 + 4 - 2 = 7
\]

### Solution for 0-1 c

The number of elements in the difference of A and B is the number of elements in A minus the number of elements in the intersection of A and B.

\[
    |A - B| = |A| - |A ∩ B| = 5 - 2 = 3
\]

## Problem 0-3

Let A = 600/6 and B = 60 mod 42. Are these statements True or False?
(a) \( A \equiv B \ (\text{mod}\ 2) \)
(b) \( A \equiv B \ (\text{mod}\ 3) \)
(c) \( A \equiv B \ (\text{mod}\ 4) \)

### Solution for 0-3 a

First we need to find the value of A and B.

A = 600/6 = 100
B = 60 mod 42 = 18

Now we can check if the statement is true or false.

\[
    A \equiv B \ (\text{mod}\ 2) \Rightarrow 100 \equiv 18 \ (\text{mod}\ 2) \Rightarrow 0 \equiv 0 \ (\text{mod}\ 2)
\]

The statement is True.

### Solution for 0-3 b

\[
    A \equiv B(\text{mod}\ 3) \Rightarrow 100 \equiv 18 \ (\text{mod}\ 3) \Rightarrow 1 \equiv 0 \ (\text{mod}\ 3)
\]

The statement is false.

### Solution for 0-3 c

\[
    A \equiv B \ (\text{mod}\ 4) \Rightarrow 100 \equiv 18 (\text{mod} \ 4) \Rightarrow 0 \equiv 2(\text{mod}\ 4)
\]

The statement is false.

### Problem 0-4

Prove by **induction that**

\[
    \sum_{i=1}^{n} {i^3} = [\frac{n(n+1)}{2}]^2
\]
for any \(n \geq 1\).

#### Solution 0-4

1. Base case for \(n=1\)
\[
    1^3 = 1
\]
\[
    (\frac{1 * (1+1)}{2})^2 = 1^2 = 1
\]

2. For \(n+1\)
\[
    \sum_{i=1}^{n+1} {i^3} = \sum_{i=1}^{n} {i^3} + (n+1)^3 = [\frac{n(n+1)}{2}]^2 + (n+1)^3 = (n+1)^2[\frac{n^2}{4} + (n+1)]
\]

\[
    (n+1)^2[\frac{n^2 + 4n + 4}{4}] = [\frac{(n+2)(n+1)}{2}]^2
\]

We needed to prove

\[
    \sum_{i=1}^{n+1} {i^3} = [\frac{(n+2)(n+1)}{2}]^2
\]
