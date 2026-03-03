#include <iostream>

int main() {
	system("chcp 1251");
	const int arr_size = 7;
	float arr [arr_size];
	std::cout << "Введите 7 чисел(можно дробных):";
	for (int i = 0; i < arr_size; i++)
	{
		std::cin >> arr[i];
	}
	std::cout << "\nОтрицательные: ";
	for (int i = 0; i < arr_size; i++)
	{
		if (arr[i] < 0)std::cout << arr[i] << " ";
	}
	std::cout << "\n Нецелые: ";
	for (int i = 0; i < arr_size; i++)
	{
		if (arr[i] != (int)arr[i] )std::cout << arr[i] << " ";
	}
	std::cout << "\nЦелые положительные: ";
	for (int i = 0; i < arr_size; i++)
	{
		if (arr[i] >= 0 && arr[i] == (int)arr[i])std::cout << arr[i] << " ";
	}
}