#include "Include.h"

bool array_check(int rows, int cols, int **arr)
{
	if (rows == 1 && cols == 1)
	{
		cout << "Shifting elements is not possible. There is only one element.\n";
		return true;
	}
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			if (arr[i][j] != arr[0][0])
			{
				return false;
			}
		}
	}
	cout << "Shifting elements is pointless. All elements are the same.\n";
	return true;
}