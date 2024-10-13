#include <iostream>

int main() {
    int sampleList[] = {1, 5, 9, 2};  // Array of integer elements

    /*
    C++ does not provide a built-in function to get the length of an array.
    We can calculate it by dividing the size of sampleList by the size of an element.
    */
    int length = sizeof(sampleList) / sizeof(sampleList[0]);

    int firstElementValue = sampleList[0];  // Access the first element using index 0
    int lastElementValue = sampleList[length - 1];  // Access the last element using length - 1

    std::cout << "First element: " << firstElementValue << std::endl;
    std::cout << "Last element: " << lastElementValue << std::endl;

    return 0;
}
