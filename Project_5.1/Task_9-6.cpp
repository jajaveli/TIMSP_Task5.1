#include <iostream>
#include <ctime>

int main() {
    srand(time(0));

    int size = rand() % 29 + 2;
    int arr[30];

    std::cout << "1D array size: " << size << "\n";

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
        std::cout << arr[i] << " ";
    }

    std::cout << "\n\n";

    int rows = rand() % 10 + 1;
    int cols = rand() % 10 + 1;

    int arr2[10][10];

    std::cout << "2D array size: " << rows << " x " << cols << "\n";

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr2[i][j] = rand() % 100;
            std::cout << arr2[i][j] << " ";
        }
        std::cout << "\n";
    }

    std::cout << "\n";

    int pages, r, c;

    std::cout << "Enter pages: ";
    std::cin >> pages;

    std::cout << "Enter rows: ";
    std::cin >> r;

    std::cout << "Enter columns: ";
    std::cin >> c;

    int arr3[10][10][10];

    for (int i = 0; i < pages; i++) {
        std::cout << "Page " << i + 1 << ":\n";

        for (int j = 0; j < r; j++) {
            for (int k = 0; k < c; k++) {
                arr3[i][j][k] = rand() % 100;
                std::cout << arr3[i][j][k] << " ";
            }
            std::cout << "\n";
        }

        std::cout << "\n";
    }

    return 0;
}