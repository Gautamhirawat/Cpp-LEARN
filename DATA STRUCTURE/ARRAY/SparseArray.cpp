#include <iostream>
#include <unordered_map>

int main() {
    int size;
    std::cout << "Enter the size of the sparse array: ";
    std::cin >> size;

    std::unordered_map<int, int> sparseArray;

    std::cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; i++) {
        int element;
        std::cout << "Element " << (i + 1) << ": ";
        std::cin >> element;

        if (element != 0) {
            sparseArray[i] = element;
        }
    }

    std::cout << "The entered sparse array is:\n";
    for (int i = 0; i < size; i++) {
        std::cout << sparseArray[i] << " ";
    }

    return 0;
}
