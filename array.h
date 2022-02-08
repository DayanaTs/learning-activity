#pragma once
//АвторЖ Цыбикжапова Даяна

//пространство имен 
namespace array{

	//заполнение массива arr вручную
	void input_arr(int* arr, unsigned n);

	//заполнение массива arr случайными числами
	void random_arr(int* arr, unsigned n);

	//вывод массива
	void print_arr(int* arr, unsigned n);

	//нахождение суммы четных элементов массива arr
	int summ_arr(int* arr, unsigned n);
}

