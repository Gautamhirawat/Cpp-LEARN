#include <iostream>
#include <vector>

int main() {
    int size;
    std::cout << "Enter the size of the dynamic array: ";
    std::cin >> size;

    std::vector<int> dynamicArray(size);

    std::cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; i++) {
        std::cout << "Element " << (i + 1) << ": ";
        std::cin >> dynamicArray[i];
    }

    std::cout << "The entered dynamic array is:\n";
    for (int element : dynamicArray) {
        std::cout << element << " ";
    }

    return 0;
}
