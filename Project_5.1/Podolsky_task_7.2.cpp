#include <iostream>
#include <random>

int summAllElements(int arr[][8], const int size_x) {
	int summ = 0;
	for (int i = 0; i < size_x; i++) {
		for (int j = 0; j < 8; j++) {
			summ += arr[i][j];
		}
	}
	return summ;
}

int minElement(int arr[][8], const int size_x) {
	int min = arr[0][0];
	for (int i = 0; i < size_x; i++) {
		for (int j = 0; j < 8; j++) {
			if (min > arr[i][j]) min = arr[i][j];
		}
	}
	return min;
}

int maxElement(int arr[][8], const int size_x) {
	int max = arr[0][0];
	for (int i = 0; i < size_x; i++) {
		for (int j = 0; j < 8; j++) {
			if (max < arr[i][j]) max = arr[i][j];
		}
	}
	return max;
}

int main() {
	system("chcp 1251");
	system("cls");
	srand(time(0));
	const int size_x = 5;
	const int size_y = 8;
	int twod_arr[size_x][size_y] = { {} };
	for (int i = 0; i < size_x; i++) {
		for (int j = 0; j < size_y; j++) {
			twod_arr[i][j] = rand() % 21 - 10;
		}
	}
	std::cout << "Массив:\n";
	for (int i = 0; i < size_x; i++) {
		for (int j = 0; j < size_y; j++) {
			std::cout << twod_arr[i][j] << "\t";
		}
		std::cout << std::endl;
	}
	std::cout << "Сумма всех элементов: "; std::cout << summAllElements(twod_arr, size_x) << std::endl;
	std::cout << "Максимальный элемент: "; std::cout <<  maxElement(twod_arr, size_x) << std::endl;
	std::cout << "Минимальный элемент: "; std::cout << minElement(twod_arr, size_x) << std::endl;
}