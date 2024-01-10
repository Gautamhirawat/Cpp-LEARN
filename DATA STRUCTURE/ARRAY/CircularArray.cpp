#include <iostream>
#include <vector>

int main() {
    int size;
    std::cout << "Enter the size of the circular array: ";
    std::cin >> size;

    std::vector<int> circularArray(size);

    std::cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; i++) {
        std::cout << "Element " << (i + 1) << ": ";
        std::cin >> circularArray[i];
    }

    std::cout << "The entered circular array is:\n";
    int startIndex;
    std::cout << "Enter the start index for circular display: ";
    std::cin >> startIndex;

    for (int i = 0; i < size; i++) {
        int index = (startIndex + i) % size;
        std::cout << circularArray[index] << " ";
    }

    return 0;
}
