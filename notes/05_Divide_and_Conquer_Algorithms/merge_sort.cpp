#include <iostream>
#include <vector>

void repr_vector(const std::vector<int>& arr, int low, int high) {
    for (int i = low; i <= high; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void merge(std::vector<int>& arr, int left, int mid, int right) {
    std::cout << "Merging: ";
    repr_vector(arr, left, right);

    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; ++i)
        L[i] = arr[left + i];

    for (int j = 0; j < n2; ++j)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            ++i;
        }
        else {
            arr[k] = R[j];
            ++j;
        }

        ++k;
    }

    while (i < n1) {
        arr[k] = L[i];
        ++k;
        ++i;
    }

    while (j < n2) {
        arr[k] = R[j];
        ++k;
        ++j;
    }

    std::cout << "After merging: ";
    repr_vector(arr, left, right);
}

void merge_sort(std::vector<int>& arr, int left, int right) {
    if (left >= right) return;

    int mid = left + (right - left) / 2;
    merge_sort(arr, left, mid);
    merge_sort(arr, mid + 1, right);

    merge(arr, left, mid, right);
}

int main() {
    std::vector<int> arr = {9, 8, 7, 6, 5, 4, 3, 2, 1};

    merge_sort(arr, 0, arr.size() - 1);

    for (int i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}