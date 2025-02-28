# Recurrence relations

Articles
https://www.geeksforgeeks.org/recurrence-relations-a-complete-guide/
https://www.geeksforgeeks.org/how-to-analyse-complexity-of-recurrence-relation/

## About

Recurrence relation is a mathematical expression that defines a sequence in terms of its previous terms.

For example in mathematics we have **Febonucci numbers**. The base terms are 0 and 1. The next term is the sum of two previous ones.

The general formula of Febonucci numbers is:
\[
    F(n) = F(n-1) + F(n-2)    
\]

In algorithmic analysis, it is useful to analyze algorithms' time complexity. For example, for the binary search algorithm, we use recurrence relations. Here is the formula for binary search:

\[
    T(n) = T\left(\frac{n}{2}\right) + 1    
\]

In each step, the range will be halved; therefore, in each iteration, we need to divide \( n \) by 2 and add 1 to indicate its step.

## Methods to solve recurrence relations

### Substitution method

First we need to guess the result and use induction to prove guess is correct or incorrect.

Here is an example:
\[
    T(n)=3T(n/3)+n \\
\]

My guess result for the problem is \(O(nlogn)\)

We need to show that:
\[
    T(n) \leq cn(logn)    
\]

\[
    T(n/3) \leq c \frac{n}{3}log(\frac{n}{3}) \\
    T(n) \leq 3(c \frac{n}{3}log(\frac{n}{3})) + n \\
    T(n) \leq (cnlog(\frac{n}{3})) + n
\]

As we know
\[
    log(\frac{n}{3}) = logn - log3    
\]

Substitude terms:
\[
    T(n) \leq (cn(logn - log3)) + n \\
    T(n) \leq cn*logn - cn*log3 + n
\]

After that we need to choose large enough \(c\) so that the term \(-cn*log3 + n\) should not exceed \(cn*logn\), the term should be upper-bound. 

We need to show that
\[
    cn*log3 + n \leq cn*logn \\
    c*log3 + 1 \leq c*logn \\
    \frac{1}{logn - log3} \leq c
\]

By picking large \(c\) we will ensure \(-cn*log3 + n\) won't exceed \(cn*logn\)

Hence,
\[
    T(n) \leq cn*logn    
\]

### Recurrence tree

### Master theorem
