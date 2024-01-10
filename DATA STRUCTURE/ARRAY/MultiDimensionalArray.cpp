#include <iostream>
#include <vector>

int main() {
    int rows, columns;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    std::cout << "Enter the number of columns: ";
    std::cin >> columns;

    std::vector<std::vector<int>> matrix(rows, std::vector<int>(columns));

    std::cout << "Enter the elements of the array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << "Element at position [" << i << "][" << j << "]: ";
            std::cin >> matrix[i][j];
        }
    }

    std::cout << "The entered multi-dimensional array is:\n";
    for (const auto& row : matrix) {
        for (int element : row) {
            std::cout << element << " ";
        }
        std::cout << '\n';
    }

    return 0;
}
