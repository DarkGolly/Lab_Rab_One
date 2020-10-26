#include "Include.h"

void cin_distance(double &A, double &B, double *Arr, int lenght)
{//цикл выполняется до тех пор, пока не будет введено корректный диапазон
	char arr[16] = "";
	while (true)
	{
		display_array(lenght, Arr);//выводим массив
		cout << "Enter start of range 'A':\n";//ввод начала диапазона
		cin >> arr;
		A = check_doub(arr);//проверяем на корректность введённого значения
		cout << "Enter end of range 'B':\n";//ввод конец диапазона
		cin >> arr;
		B = check_doub(arr);
		if (A > B)
		{
			cout << "Invalid range specified!\nThe A value must not be greater than the B value!\n";
			cout << "enter again\n";
			system("pause");
			system("cls");
			continue;
		}
		if (A == B)
		{
			cout << "Invalid range specified!\nThe value of A must not be equal to the value of B!\n";
			cout << "enter again\n";
			system("pause");
			system("cls");
			continue;
		}
		if (A+1 == B)
		{
			cout << "Invalid range specified!\nThere must be at least 2 units between the values A and B!\n";
			cout << "enter again\n";
			system("pause");
			system("cls");
			continue;
		}
		break;
	}
}