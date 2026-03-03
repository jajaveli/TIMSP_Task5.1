#include <iostream>
#include <vector>
#include <algorithm> // sort

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    if (n <= 0) {
        cout << "Некорректный размер массива.\n";
        return 0;
    }

    vector<int> arr(n);
    cout << "Введите элементы массива:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Поиск элементов с одинаковыми значениями и вывод их индексов
    cout << "\nПовторяющиеся элементы и их индексы (нумерация с 0):\n";
    bool foundDuplicates = false;
    for (int i = 0; i < n; ++i) {
        bool alreadyProcessed = false;
        // Проверяем, не разобрали ли мы уже это значение ранее
        for (int k = 0; k < i; ++k) {
            if (arr[k] == arr[i]) {
                alreadyProcessed = true;
                break;
            }
        }
        if (alreadyProcessed) continue;

        // Ищем такие же элементы дальше
        bool hasSame = false;
        cout << "Значение " << arr[i] << " встречается в индексах: ";
        for (int j = i; j < n; ++j) {
            if (arr[j] == arr[i]) {
                cout << j << " ";
                if (j != i) hasSame = true;
            }
        }
        cout << "\n";
        if (hasSame) foundDuplicates = true;
    }
    if (!foundDuplicates) {
        cout << "Повторяющихся значений нет.\n";
    }

    // Информация о массиве: размер, min, max
    int mn = arr[0], mx = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] < mn) mn = arr[i];
        if (arr[i] > mx) mx = arr[i];
    }

    cout << "\nИнформация о массиве:\n";
    cout << "Размер: " << n << "\n";
    cout << "Минимальный элемент: " << mn << "\n";
    cout << "Максимальный элемент: " << mx << "\n";

    // Сортировка по возрастанию
    sort(arr.begin(), arr.end());
    cout << "\nМассив после сортировки по возрастанию:\n";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << "\n";

    // Создание массива уникальных (которые не повторялись в исходном массиве)
    // Логика: считаем, сколько раз встречается каждый элемент
    // Если встречается ровно 1 раз — кладём в новый массив
    vector<int> unique_arr;
    for (int i = 0; i < n; ++i) {
        int cnt = 0;
        for (int j = 0; j < n; ++j) {
            if (arr[j] == arr[i]) cnt++;
        }
        if (cnt == 1) {
            unique_arr.push_back(arr[i]);
        }
        // Если cnt > 1 — элемент повторяется, не добавляем
    }

    cout << "\nМассив уникальных элементов (которые НЕ повторялись в исходном массиве):\n";
    cout << "Размер unique_arr: " << unique_arr.size() << "\n";
    if (unique_arr.empty()) {
        cout << "Уникальных элементов нет.\n";
    }
    else {
        for (int x : unique_arr) {
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}