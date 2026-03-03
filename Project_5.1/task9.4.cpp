#include <iostream>

int main() {
    system("chcp 1251");
    int n;
    std::cout << "Введите количество элементов массива: ";
    std::cin >> n;

    int* arr = new int[n];

    std::cout << "Введите элементы массива:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int choice;
    std::cout << "Выберите сортировку:" << std::endl;
    std::cout << "1 - по возрастанию" << std::endl;
    std::cout << "2 - по убыванию" << std::endl;
    std::cout << "Ваш выбор: ";
    std::cin >> choice;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (choice == 1) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
            else {
                if (arr[j] < arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    std::cout << "Отсортированный массив: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr;
    return 0;
}
