#include <iostream>

int main() {
    int choice;

    do {
        // Menu
        std::cout << "Menu:" << std::endl;
        std::cout << "1. If-else statement" << std::endl;
        std::cout << "2. For loop" << std::endl;
        std::cout << "3. While loop" << std::endl;
        std::cout << "4. Do-while loop" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice (1-5): ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                // If-else statement
                int num;
                std::cout << "Enter a number: ";
                std::cin >> num;

                if (num % 2 == 0) {
                    std::cout << num << " is even." << std::endl;
                } else {
                    std::cout << num << " is odd." << std::endl;
                }
                break;
            }

            case 2: {
                // For loop
                int n;
                std::cout << "Enter the value of n: ";
                std::cin >> n;

                std::cout << "Counting from 1 to " << n << ":" << std::endl;
                for (int i = 1; i <= n; ++i) {
                    std::cout << i << " ";
                }
                std::cout << std::endl;
                break;
            }

            case 3: {
                // While loop
                int count = 1;
                std::cout << "Counting using a while loop:" << std::endl;
                while (count <= 5) {
                    std::cout << count << " ";
                    count++;
                }
                std::cout << std::endl;
                break;
            }

            case 4: {
                // Do-while loop
                int x = 1;
                std::cout << "Counting using a do-while loop:" << std::endl;
                do {
                    std::cout << x << " ";
                    x++;
                } while (x <= 5);
                std::cout << std::endl;
                break;
            }

            case 5:
                // Exit
                std::cout << "Exiting the program." << std::endl;
                break;

            default:
                std::cout << "Invalid choice. Please enter a number between 1 and 5." << std::endl;
        }

    } while (choice != 5);

    return 0;
}
