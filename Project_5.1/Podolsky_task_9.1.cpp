#include <iostream>

int summElements(const int* arr, int size) {
	int summ = 0;
	for (int i = 0; i < size; i++) {
		summ += arr[i];
	}
	return summ;
}

int averageElements(const int* arr, int size) {
	return summElements (arr, size) / size;
}

int minElements(const int* arr, int size) {
	int min = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (min > arr[i]) min = arr[i];
	}
	return min;
}

int maxElements(const int* arr, int size) {
	int max = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (max < arr[i]) max = arr[i];
	}
	return max;
}

int main() {
	system("chcp 1251");
	int size = 0;
	std::cout << "Введите размер массива: "; std::cin >> size;
	int* arr = new int(size);
	std::cout << "Введите " << size << " элементов массива: ";
	for (int i = 0; i < size; i++) {
		std::cin >> arr[i];
	}
	std::cout << "Сумма элементов: "; std::cout << summElements(arr, size) << std::endl;
	std::cout << "Среднеарифметическое элементов: "; std::cout << averageElements(arr, size) << std::endl;
	std::cout << "Минимальный элемент: "; std::cout << minElements(arr, size) << std::endl;
	std::cout << "Максимальный элемент: ";  std::cout << maxElements(arr, size) << std::endl;
	// delete[] arr; Вылетает исключение, не могу понять ничего, никакой информации нет (есть предположение, что очищается теперь адрес сам (не факт)
	return 0;
}

