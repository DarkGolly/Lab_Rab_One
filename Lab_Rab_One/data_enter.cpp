#include "Include.h"

void data_enter(int rangeOfArray, double* Array)
{
	char arr[16] = "";
	cout << "Fill the array: " << endl;
	for (int i = 0; i < rangeOfArray; i++)
	{
		cout << "\telement [ " << i << " ] --->:";
		cin >> arr;
		Array[i] = check_doub (arr);
	}
}

void data_enter(int rows, int columns, int** Matrix)
{
	cout << "Enter a data in matrix: " << endl;
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			cout << "\n\telement [ " << i << " ] " << " [ " << j << " ] --->:";
			cin >> Matrix[i][j];
		}
	}
}