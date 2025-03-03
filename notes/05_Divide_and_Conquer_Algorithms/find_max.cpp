#include <iostream>
#include <vector>

void repr_vector(const std::vector<int>& arr, int low, int high) {
    for (int i = low; i <= high; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int findMax(std::vector<int> arr, int low, int high) {
    if (low == high) {
        std::cout << "Base case: " << arr[low] << std::endl;
        return arr[low];
    }

    repr_vector(arr, low, high);

    int mid = (low + high) / 2;

    int leftMax = findMax(arr, low, mid);
    int rightMax = findMax(arr, mid + 1, high);

    return std::max(leftMax, rightMax);
}

int main() {
    std::vector<int> arr = {1, 2, 3, 6, 7, 8, 9, 4, 5};

    std::cout << findMax(arr, 0, arr.size() - 1) << std::endl;

    return 0;
}