#include <iostream>
#include <vector>

int main() {
    int size;
    std::cout << "Enter the size of the boolean array: ";
    std::cin >> size;

    std::vector<bool> boolArray(size);

    std::cout << "Enter the elements of the array (0 for false, 1 for true):\n";
    for (int i = 0; i < size; i++) {
        int inputValue;
        std::cout << "Element " << (i + 1) << ": ";
        std::cin >> inputValue;

        boolArray[i] = (inputValue != 0);
    }

    std::cout << "The entered boolean array is:\n";
    for (bool element : boolArray) {
        std::cout << element << " ";
    }

    return 0;
}
