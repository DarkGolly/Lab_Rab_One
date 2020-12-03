#include "Include.h"
//выводим массивы
template <typename T>
void display_array(int rangeOfArray, T* Array)
{
	for (int i = 0; i < rangeOfArray; i++)//вывод массива
	{
		cout << "\telement [ " << i << " ] ---> ";
		cout << Array[i] << endl;
	}
	cout << endl;
}

template void display_array<int>(int rangeOfArray, int* Array);
template void display_array<float>(int rangeOfArray, float* Array);
template void display_array<double>(int rangeOfArray, double* Array);

void display_array(int rows, int columns, int** Array)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << setw(3) << Array[i][j] << " | ";
		}
		cout << endl;
	}
	cout << endl;
}