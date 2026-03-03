#include <iostream>

int main() {
    system("chcp 1251");
    int arr[5];
    int sum = 0;

    std::cout << "Введите 5 целых чисел:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cin >> arr[i];
        sum += arr[i];
    }

    std::cout << "Массив: ";
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Сумма: " << sum << std::endl;

    double avg = static_cast<double>(sum) / 5;
    std::cout << "Среднее: " << avg << std::endl;

    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    std::cout << "Максимум: " << max << ", Минимум: " << min << std::endl;

    return 0;
}
