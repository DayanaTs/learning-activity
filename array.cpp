#include <iostream>
#include <stdlib.h>
#include "array.h"

using namespace std;

//пространство имен
namespace array{

	//заполнение массива arr вручную
	void input_arr(int* arr, unsigned n) {

		for (unsigned i = 0; i < n; i++) {

			cout << "\nВведите ЦЕЛОЕ ПОЛОЖИТЕЛЬНОЕ число: ";
			cin >> arr[i];			//ввод значения
			
			try {	// ищем исключения внутри этого блока и отправляем их в соответствующий обработчик catch
				//Если пользователь ввел отрицательное или вещественное число, то выбрасывается исключение
				if (arr[i] < 0)
					throw "Нou have entered a negative or real number!";		// выбрасывается исключение типа const char*
			}
			catch(const char* exception){							// обработчик исключений типа const char*
				std::cerr << "Error: " << exception << '\n';				//вывод сообщения об исключении
				cout << "\nВведите повторно число(целое положительное): ";  		//повторный ввод того же элемента
				cin >> arr[i];
			}
		}
	}


	//заполнение массива arr случаными числами
	void random_arr(int* arr, unsigned n) {
		for (unsigned i = 0; i < n; i++) {
			arr[i] = rand() % 80 + 1;
		}
	}

	//вывод массива на экран
	void print_arr(int* arr, unsigned n) {
		for (unsigned i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	//нахождение суммы четных чисел
	int summ_arr(int* arr, unsigned n) {
		int sum = 0;
		for (unsigned i = 0; i < n; i++) {
			if (arr[i] % 2 == 0) {				//проверка на четность
				sum += arr[i];				//сумма четных элементов массива
			}
		}
		return sum;
	}

}

//Автор: Цыбикжапова Даяна 
