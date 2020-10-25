#include "Include.h"

double* data_enter(int &length)
{
	const int maxlengthOfArray = 50;

	cout << "Enter the length of the array:\n";
	cin >> length;//вводим длину массива
	cout << endl;

	//проверка на корректность ввода длины массива
	while (true)
	{
		if (length <= 0 || length > maxlengthOfArray)
		{
			cout << "\nBulding impossible" << endl;
			cout << "\nEnter the size of the array -->";
			cin >> length;
		}
		else
			break;
	}
	double* Array = new double[length];
	char arr[16] = "";
	cout << "Fill the array: " << endl;
	for (int i = 0; i < length; i++)
	{
		cout << "\telement [ " << i << " ] --->:";
		cin >> arr;
		Array[i] = check_doub (arr);
	}
	return Array;
}

int** data_enter(int& rows, int& cols)
{
	while (true)
	{
		const int maxlengthOfArray = 50;
		cout << "Enter the number of lines:";
		rows = check(rows);
		cout << "\nEnter the number of columns:";
		cols = check(cols);
		if ((rows <= 0 || rows > maxlengthOfArray) && (cols <= 0 || cols > maxlengthOfArray))
		{
			cout << "\nBulding impossible\n" << endl;
			cout << "Enter the number of lines:";
			rows = check(rows);
			cout << "\nEnter the number of columns:";
			cols = check(cols);
		}
		else break;
	}

	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}

	int temp_dig = 0;
	cout << "Enter a data in matrix: " << endl;
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cout << "\n\telement [ " << i << " ] " << " [ " << j << " ] --->:";
			arr[i][j] = check(temp_dig);
		}
	}
	return arr;
}