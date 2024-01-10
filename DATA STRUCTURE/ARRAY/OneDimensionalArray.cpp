#include <iostream>
#include <vector>

int main() {
    int size;
    std::cout << "Enter the size of the one-dimensional array: ";
    std::cin >> size;

    std::vector<int> arr(size);

    std::cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; i++) {
        std::cout << "Element " << (i + 1) << ": ";
        std::cin >> arr[i];
    }

    std::cout << "The entered one-dimensional array is:\n";
    for (int element : arr) {
        std::cout << element << " ";
    }

    return 0;
}
