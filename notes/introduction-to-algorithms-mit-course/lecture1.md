# Lecture 1

## What is an algorithm?

Algorithm is a function, it takes an input and produces an output.

\[
f: \text{{input}} \rightarrow \text{{output}}
\]

Sample problem

We need to find a person with the given birthday

Inductive Hypotesis: if first k students cotain match algorithm returns a match before interviewing student k+1.

Base case: k = 0

Inductive step:

- if k` contains a match -> already returned by inductive hypothesis
- else k`+1 contains a match -> algorithm returns a match

## Efficiency

**Time complexity** - an amount of time that an algorithm takes to run as a function of the size of input.

Not only how fast an algorithm is, but also how much faster it than other possible approaches.

We use assymptotic analysis to compare algorithms.

Here are the most common notations:

\[
O(n) - \text{{upper bound}} \\
\Omega(n) - \text{{lower bound}} \\
\Theta(n) - \text{{average case}} \\
\]

Here are some notations with names:
\[
\Theta(1) - \text{{constant time}} \\
\Theta(\log n) - \text{{logarithmic time}} \\
\Theta(n) - \text{{linear time}} \\
\Theta(n \log n) - \text{{linearithmic time}} \\
\Theta(n^2) - \text{{quadratic time}} \\
\Theta(n^c) - \text{{polynomial time}} \\
\]

## Model of computation

Word-RAM model

- memory = array of words (w-bit)
- "array" = consequitive chunk of memory
- => array[i] = memory[address(array) + i]

Array access is constant time: \(\Theta(1)\)

## Constant time \(O(1)\)

If an algorithm's execution time does not depend of the size of input then the time complexity of the algorithm is constant. For example taking an element from an array using index. To any index it executes same procedure.

## Logarithmic time \(O(log{n})\)

If time complexity of an algorithms grows logarithmically as the size of input grows this is called logarithmic time complexity. In most often cases it happens if the size of input reduces by half or by any constant factor, then it is called logarithmic time complexity.

## Linear time \(O(n)\)

If an algorithm's execution time increases linearly with the size of input.
