// Лабораторная работа 2 Семестр 2 Вариант 6

#include <iostream>
#include <vector>


int main() {

	
	setlocale(LC_ALL, "rus"); // перевод на русский
	// Создаем вектор целых чисел
	std::vector<int> numbers;
	
	// Запрашиваем у пользователя размер списка
	int n;
	std::cout << "Введите количество элементов списка: ";
	std::cin >> n;

	// Вводим элементы списка
	std::cout << "Введите " << n << " целых чисел ";
	for (int i = 0; i < n; ++i) {

		int x;
		std::cin >> x;
		numbers.push_back(x); // добавляем элементв конец вектора
	}

	// Вычисляем сумму нечетных элементов 

	int sum = 0; // пременная для хранения суммы
	for (int i = 0; i < numbers.size(); ++i) {
		// проверка на четность
		if (numbers[i] % 2 != 0) {

			sum += numbers[i];
		}
	}
	// вывод
	std::cout << "Сумма нечетных элементов " << sum << std::endl;
	return 0;

}
