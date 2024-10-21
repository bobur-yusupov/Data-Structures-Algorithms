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