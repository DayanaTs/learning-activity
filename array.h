#pragma once
//Автор: ЦЫбикжапова Даяна 

//пространство имен 
namespace array{

	//заполнение массива arr вручную
	void input_arr(int* arr, unsigned n);

	//заполнение массива arr случаными числами
	void random_arr(int* arr, unsigned n);

	//вывод массива arr на экран
	void print_arr(int* arr, unsigned n);

	//нахождение суммы четных чисел массива arr
	int summ_arr(int* arr, unsigned n);
}

