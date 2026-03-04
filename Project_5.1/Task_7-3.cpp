#include <iostream>
#include <ctime>

int main() {
    const int rows = 7;
    const int cols = 5;

    int arr[rows][cols];

    srand(time(0));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = rand() % 100;
        }
    }

    std::cout << "Array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }

    int row_number;
    std::cout << "\nEnter row number (1-7): ";
    std::cin >> row_number;

    std::cout << "Row:\n";
    for (int j = 0; j < cols; j++) {
        std::cout << arr[row_number - 1][j] << " ";
    }
    std::cout << "\n";

    int search_number;
    bool found = false;

    std::cout << "\nEnter number to search: ";
    std::cin >> search_number;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == search_number) {
                std::cout << "Found: " << arr[i][j]
                    << " at (" << i << ", " << j << ")\n";
                found = true;
            }
        }
    }

    if (!found) {
        std::cout << "Number not found\n";
    }

    return 0;
}