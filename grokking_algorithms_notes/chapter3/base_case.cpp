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
