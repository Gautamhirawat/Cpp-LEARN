#include <iostream>  // Include the necessary header file for input/output operations
using namespace std;

// Entry point of the program
int main() {
    // Output a message to the console
    std::cout << "Hello, World!" << std::endl;

    // Declare and initialize variables
    int num1 = 5;
    int num2 = 3;

    // Perform arithmetic operations
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    float quotient = static_cast<float>(num1) / num2;  // Casting to float for accurate division

    // Output the results
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Product: " << product << std::endl;
    std::cout << "Quotient: " << quotient << std::endl;

    // Use conditional statements
    if (num1 > num2) {
        std::cout << num1 << " is greater than " << num2 << std::endl;
    } else if (num1 < num2) {
        std::cout << num1 << " is less than " << num2 << std::endl;
    } else {
        std::cout << num1 << " is equal to " << num2 << std::endl;
    }

    // Use a loop to display numbers from 1 to 5
    for (int i = 1; i <= 5; ++i) {
        std::cout << "Number: " << i << std::endl;
    }

    // End the program
    return 0;
}
