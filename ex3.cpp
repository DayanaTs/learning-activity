//Автор: ЦЫбикжапова Даяна 

#include <iostream>
#include <locale.h>

#include "array.h"		

using namespace std;

using namespace array;				//подключение созданного пространства имен 


int main()
{
	setlocale(LC_ALL, "Rus");

	const int n = 7;				//кол-во элементов массива
	int *arr = new int[n];			//дин. массив
	int k;							//число для выбора способа заполнения массива
	
	cout << "1.Для заполнения массива случайными числами введите ЧЕТНОЕ ЦЕЛОЕ число\n";
	cout << "2.Для заполнения массива вручную введите НЕЧЕТНОЕ ЦЕЛОЕ число\n";
	cin >> k;
	cout << "\n";

	//Выбор способа заполнения массива
	if (k % 2 == 0) {
		random_arr(arr, n);				//заполнение массива arr случаными числами
	}
	else {
		input_arr(arr, n);				//заполнение массива вручную
	}
	

	cout << "\nМассив: " << endl;		//вывод массива на экран    
	print_arr(arr, n);

	cout << "\nСумма четных элементов массива: " << summ_arr(arr,n) << endl;		

	delete[] arr;						//освобождение памяти, выделенной под массив

	return 0;
}

