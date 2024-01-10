#include <iostream>
#include <vector>

int main() {
    int rows;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    std::vector<std::vector<int>> jaggedArray(rows);

    std::cout << "Enter the elements of the array:\n";
    for (int i = 0; i < rows; i++) {
        int columns;
        std::cout << "Enter the number of columns for row " << (i + 1) << ": ";
        std::cin >> columns;

        jaggedArray[i] = std::vector<int>(columns);

        std::cout << "Enter the elements for row " << (i + 1) << ":\n";
        for (int j = 0; j < columns; j++) {
            std::cout << "Element " << (j + 1) << ": ";
            std::cin >> jaggedArray[i][j];
        }
    }

    std::cout << "The entered jagged array is:\n";
    for (const auto& row : jaggedArray) {
        for (int element : row) {
            std::cout << element << " ";
        }
        std::cout << '\n';
    }

    return 0;
}
