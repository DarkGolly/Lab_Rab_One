#include "Include.h"

int** copy_arr(int& rows, int& cols, int** arr)
{
	int** new_arr = new int* [rows];

	for (int i = 0; i < rows; i++)
	{
		new_arr[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			new_arr[i][j] = arr[i][j];
		}
	}
	return new_arr;
}