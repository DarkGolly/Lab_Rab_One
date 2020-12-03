#include "Include.h"

template <typename T>
bool cin_distance(T &A, T &B, T *Arr, int lenght)//ввод дистанции
{
	text_s3_1();
	char arr[16] = "";
	display_array(lenght, Arr);//выводим массив
	cout << "Enter start of range 'A':\n";//ввод начала диапазона
	cin >> arr;
	A = static_cast<T>(check_doub(arr));//проверяем на корректность введённого значения
	cout << "Enter end of range 'B':\n";//ввод конец диапазона
	cin >> arr;
	B = static_cast<T>(check_doub(arr));
	if (A > B)
	{
		cout << "Invalid range specified!\nThe A value must not be greater than the B value!\n";
		cout << "enter again\n";
		system("pause");
		system("cls");
		return false;
	}
	if (A == B)
	{
	cout << "Invalid range specified!\nThe value of A must not be equal to the value of B!\n";
		cout << "enter again\n";
		system("pause");
		system("cls");
		return false;
	}
	if (A+1 == B)
	{
		cout << "Invalid range specified!\nThere must be at least 2 units between the values A and B!\n";
		cout << "enter again\n";
		system("pause");
		system("cls");
		return false;
	}
	return true;
}

template bool cin_distance<int>(int&, int&, int*, int);
template bool cin_distance<float>(float&, float&, float*, int);
template bool cin_distance<double>(double&, double&, double*, int);
