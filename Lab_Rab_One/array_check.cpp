#include "Include.h"

template <typename T>
bool array_check(int rows, int cols, T **arr)
{//проверка размерности массива
	if (rows == 1 && cols == 1)
	{
		cout << "Shifting elements is not possible. There is only one element.\n";
		return true;
	}

	//проверка всех значений массива
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			if (arr[i][j] != arr[0][0])
			{
				return false;//всё ок и возвращаем лож
			}
		}
	}
	cout << "Shifting elements is pointless. All elements are the same.\n";
	return true;
}

template bool array_check<int>(int, int, int**);
template bool array_check<float>(int, int, float**);
template bool array_check<double>(int, int, double**);