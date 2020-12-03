#include "Include.h"

template <typename T>
T** copy_arr(int& rows, int& cols, T** arr)
{
	T** new_arr = new T* [rows];

	for (int i = 0; i < rows; i++)
	{
		new_arr[i] = new T[cols];
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

template int** copy_arr<int>(int&, int&, int**);
template float** copy_arr<float>(int&, int&, float**);
template double** copy_arr<double>(int&, int&, double**);