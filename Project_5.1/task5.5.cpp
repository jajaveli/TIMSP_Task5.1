#include <iostream>

int main() {
    system("chcp 1251");
    long long num;
    std::cout << "Введите число: ";
    std::cin >> num;

    if (num < 0) num = -num;

    int digits = 0;
    do {
        digits++;
        num /= 10;
    } while (num > 0);

    if (digits == 6) {
        std::cout << "Число шестизначное" << std::endl;
    }
    else {
        std::cout << "Число не шестизначное" << std::endl;
    }

    return 0;
}
