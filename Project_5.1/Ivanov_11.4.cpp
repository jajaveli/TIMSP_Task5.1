#include <iostream>
#include <vector>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    vector<double> sales; // список продаж
    int choice;

    do {
        cout << "\n=== Кассовый аппарат ===\n";
        cout << "1. Новая продажа (ввести сумму)\n";
        cout << "2. Вывести список продаж\n";
        cout << "3. Отменить последнюю продажу\n";
        cout << "4. Вывести отчёт (кол-во продаж и общая сумма)\n";
        cout << "5. Максимальная и минимальная продажа\n";
        cout << "0. Выход\n";
        cout << "Ваш выбор: ";
        cin >> choice;

        if (!cin) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Ошибка ввода.\n";
            continue;
        }

        switch (choice) {
        case 1: {
            double amount;
            cout << "Введите сумму продажи: ";
            cin >> amount;
            if (amount <= 0) {
                cout << "Сумма должна быть положительной.\n";
            }
            else {
                sales.push_back(amount);
                cout << "Продажа добавлена. Номер продажи: " << sales.size() << "\n";
            }
            break;
        }
        case 2: {
            if (sales.empty()) {
                cout << "Продаж нет.\n";
            }
            else {
                cout << "Список продаж:\n";
                for (size_t i = 0; i < sales.size(); ++i) {
                    cout << "Продажа #" << (i + 1) << ": " << sales[i] << "\n";
                }
            }
            break;
        }
        case 3: {
            if (sales.empty()) {
                cout << "Отменять нечего, список пуст.\n";
            }
            else {
                cout << "Последняя продажа #" << sales.size()
                    << " на сумму " << sales.back() << " отменена.\n";
                sales.pop_back();
            }
            break;
        }
        case 4: {
            if (sales.empty()) {
                cout << "Продаж нет.\n";
            }
            else {
                double sum = 0;
                for (double x : sales) sum += x;
                cout << "Количество продаж: " << sales.size() << "\n";
                cout << "Общая сумма: " << sum << "\n";
            }
            break;
        }
        case 5: {
            if (sales.empty()) {
                cout << "Продаж нет.\n";
            }
            else {
                double mn = sales[0], mx = sales[0];
                for (double x : sales) {
                    if (x < mn) mn = x;
                    if (x > mx) mx = x;
                }
                cout << "Минимальная продажа: " << mn << "\n";
                cout << "Максимальная продажа: " << mx << "\n";
            }
            break;
        }
        case 0:
            cout << "Выход из программы.\n";
            break;
        default:
            cout << "Неизвестный пункт меню.\n";
        }

    } while (choice != 0);

    return 0;
}