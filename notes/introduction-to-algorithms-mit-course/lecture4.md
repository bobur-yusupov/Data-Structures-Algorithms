# Hashing

Hashing is a process of converting a data into a fixed-size **hash value** using **hash function**. Hash table is a data structure to store **key-value data** and uses hashing to map keys to a specific indices.

## Universal Hash Function

\[
h_{ab} = (((ak + b) \mod p) \mod m)
\]

\[
H(p, m) = \{h_{ab} | a,b \in \{0, ..., p-1\}\}
\]

Choosing a hash function

\[
Pr_{h \in H}\{ h(k_i) \neq h(k_j) \} \leq \frac{1}{m}, \forall k_i \neq k_j, \in \{0, n - 1\}
\]
