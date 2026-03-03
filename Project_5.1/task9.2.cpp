#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    system("chcp 1251");
    int n;
    std::cout << "Введите количество элементов массива: ";
    std::cin >> n;

    int* arr = new int[n];
    int choice;

    std::cout << "Заполнение массива:" << std::endl;
    std::cout << "1 - ручной ввод" << std::endl;
    std::cout << "2 - случайные числа" << std::endl;
    std::cout << "Ваш выбор: ";
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "Введите элементы массива:" << std::endl;
        for (int i = 0; i < n; i++) {
            std::cin >> arr[i];
        }
    }
    else {
        srand(time(0));
        std::cout << "Сгенерированные случайные числа:" << std::endl;
        for (int i = 0; i < n; i++) {
            arr[i] = rand() % 100;
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    double avg = static_cast<double>(sum) / n;

    std::cout << "\nМассив: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\nСумма: " << sum << std::endl;
    std::cout << "Среднее: " << avg << std::endl;
    std::cout << "Максимум: " << max << ", Минимум: " << min << std::endl;

    delete[] arr;
    return 0;
}
