#include "Include.h"

void menu_s_3(double* arr, int & len)
{
	char switch_on;
	double A;
	double B;

	while (true)
	{
		display_array(len, arr);
		//кол-во элементов массива в диапазоне от А до В
		cout << "1 - The number of array elements located in the range from A to B\n";
		//сумма элементов массива после максимального элемента
		cout << "2 - Sum of array elements located after the maximum element\n";
		//сортировка массива
		cout << "3 - Quick sorting of array elements in descending order of modules\n";

		cout << "\n\n\n\nEnter '0' and press \"Enter\" to return to the previous menu.\n\n";
		cout << "Choose further action:";

		cin >> switch_on;
		if (switch_on == '0')
		{
			system("cls");
			break;
		}
		switch (switch_on)
		{
		case '1':
			system("cls");
			cin_distance(A, B, arr, len);//вводим дистанцию и проверяем на корректность
			quantity(arr, len, A, B);//находим количество элементов из диапазона
			system("pause");//пауза, ждём нажатия пользователя
			system("cls");
			break;
		case '2':
			system("cls");
			cout << "sum of elements after maximum\n";
			sum(arr, len);//сумма элементов массива после максимального элемента
			system("pause");
			system("cls");
			break;
		case '3':
			system("cls");
			sorting_s_3(len, arr);//сортировка
			break;
		default:
			cout << "Attention!!! \nchoose number seminar again:";
			break;
		}
	}
}