#include <iostream>
#include <vector>

int binary_search(const std::vector<int>& arr, int low, int high, int target) {
    if (low > high) {
        return -1;
    }

    int mid = (low + high) / 2;

    if (arr[mid] == target) {
        return mid;
    } else if (arr[mid] < target) {
        return binary_search(arr, mid + 1, high, target);
    } else {
        return binary_search(arr, low, mid - 1, target);
    }
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    std::cout << binary_search(arr, 0, arr.size() - 1, 5) << std::endl;

    return 0;
}