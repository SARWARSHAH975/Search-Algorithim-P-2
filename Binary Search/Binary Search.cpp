#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& arr, int key) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            return mid; // Element found, return its index
        }

        if (arr[mid] < key) {
            left = mid + 1; // Adjust the left boundary
        }
        else {
            right = mid - 1; // Adjust the right boundary
        }
    }

    return -1; // Element not found
}

int main() {
    int n;
    std::cout << "Enter the number of elements in the sorted array: ";
    std::cin >> n;

    std::vector<int> arr(n);
    std::cout << "Enter the elements of the sorted array in ascending order, separated by spaces:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int key;
    std::cout << "Enter the number you want to search for: ";
    std::cin >> key;

    int result = binarySearch(arr, key);

    if (result != -1) {
        std::cout << "Element found at index " << result << std::endl;
    }
    else {
        std::cout << "Element not found in the array." << std::endl;
    }

    return 0;
}
