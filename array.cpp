#include <iostream>
#include <stdlib.h>
#include "array.h"

using namespace std;

//������������ ����
namespace array{

	//���������� ������� arr �������
	void input_arr(int* arr, unsigned n) {

		for (unsigned i = 0; i < n; i++) {

			cout << "\n������� ����� ������������� �����: ";
			cin >> arr[i];			//���� ��������
			
			try {															// ���� ���������� ������ ����� ����� � ���������� �� � ��������������� ���������� catch
				//���� ������������ ���� ������������� ��� ������������ �����, �� ������������� ����������
				if (arr[i] < 0)
					throw "�ou have entered a negative or real number!";	// ������������� ���������� ���� const char*
			}
			catch(const char* exception){									// ���������� ���������� ���� const char*
				std::cerr << "Error: " << exception << '\n';				//����� ��������� �� ����������
				cout << "\n������� �������� �����(����� �������������): ";  //��������� ���� ���� �� ��������
				cin >> arr[i];
			}
		}
	}


	//���������� ������� arr ��������� �������
	void random_arr(int* arr, unsigned n) {
		for (unsigned i = 0; i < n; i++) {
			arr[i] = rand() % 80 + 1;
		}
	}

	//����� ������� �� �����
	void print_arr(int* arr, unsigned n) {
		for (unsigned i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	//���������� ����� ������ �����
	int summ_arr(int* arr, unsigned n) {
		int sum = 0;
		for (unsigned i = 0; i < n; i++) {
			if (arr[i] % 2 == 0) {			//�������� �� ��������
				sum += arr[i];				//����� ������ ��������� �������
			}
		}
		return sum;
	}

}

//�����: ����������� ����� 