#include "Include.h"

void destroy(double *arr, int len)
{
	delete[] arr;
}


void destroy(int** arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}