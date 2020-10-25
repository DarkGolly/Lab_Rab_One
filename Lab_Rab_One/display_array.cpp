#include "Include.h"

void display_array(int rangeOfArray, double* Array)
{
	for (int i = 0; i < rangeOfArray; i++)//вывод массива
	{
		cout << "\telement [ " << i << " ] ---> ";
		cout << Array[i] << endl;
	}
	cout << endl;
}

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