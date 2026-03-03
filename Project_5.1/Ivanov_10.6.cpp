#include <iostream>


using namespace std;

// Шаблон поиска максимума
template <typename T>
T myMax(T a, T b) {
    return (a > b) ? a : b;
}

// Шаблон среднего арифметического
template <typename T>
T myAverage(T a, T b) {
    return (a + b) / static_cast<T>(2);
}

// Шаблон модуля суммы
template <typename T>
T absSum(T a, T b) {
    T s = a + b;
    // Для вещественных типов можно использовать fabs, но тут обойдемся общим вариантом
    return (s < 0) ? -s : s;
}

// Шаблон вывода целой части суммы
template <typename T>
long long intPartOfSum(T a, T b) {
    T s = a + b;
    // Отбрасываем дробную часть через приведение
    return static_cast<long long>(s);
}

int main() {
    setlocale(LC_ALL, "Russian");

    int typeChoice;
    cout << "Выберите тип данных для двух переменных:\n";
    cout << "1 - int\n";
    cout << "2 - float\n";
    cout << "3 - double\n";
    cout << "Ваш выбор: ";
    cin >> typeChoice;

    int op;
    cout << "\nВыберите операцию:\n";
    cout << "1 - Поиск максимального\n";
    cout << "2 - Среднее арифметическое\n";
    cout << "3 - Модуль суммы\n";
    cout << "4 - Целая часть суммы\n";
    cout << "Ваш выбор: ";
    cin >> op;

    cout << "\n";

    if (typeChoice == 1) {
        int a, b;
        cout << "Введите два int числа: ";
        cin >> a >> b;
        switch (op) {
        case 1:
            cout << "Максимальное: " << myMax(a, b) << "\n";
            break;
        case 2:
            cout << "Среднее арифметическое: " << myAverage(a, b) << "\n";
            break;
        case 3:
            cout << "Модуль суммы: " << absSum(a, b) << "\n";
            break;
        case 4:
            cout << "Целая часть суммы: " << intPartOfSum(a, b) << "\n";
            break;
        default:
            cout << "Неизвестная операция.\n";
        }
    }
    else if (typeChoice == 2) {
        float a, b;
        cout << "Введите два float числа: ";
        cin >> a >> b;
        switch (op) {
        case 1:
            cout << "Максимальное: " << myMax(a, b) << "\n";
            break;
        case 2:
            cout << "Среднее арифметическое: " << myAverage(a, b) << "\n";
            break;
        case 3:
            cout << "Модуль суммы: " << absSum(a, b) << "\n";
            break;
        case 4:
            cout << "Целая часть суммы: " << intPartOfSum(a, b) << "\n";
            break;
        default:
            cout << "Неизвестная операция.\n";
        }
    }
    else if (typeChoice == 3) {
        double a, b;
        cout << "Введите два double числа: ";
        cin >> a >> b;
        switch (op) {
        case 1:
            cout << "Максимальное: " << myMax(a, b) << "\n";
            break;
        case 2:
            cout << "Среднее арифметическое: " << myAverage(a, b) << "\n";
            break;
        case 3:
            cout << "Модуль суммы: " << absSum(a, b) << "\n";
            break;
        case 4:
            cout << "Целая часть суммы: " << intPartOfSum(a, b) << "\n";
            break;
        default:
            cout << "Неизвестная операция.\n";
        }
    }
    else {
        cout << "Неизвестный тип данных.\n";
    }

    return 0;
}