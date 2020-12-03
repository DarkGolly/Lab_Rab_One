#include "Include.h"
//удаляем массивы
template <typename T>
void destroy(T *arr, int len)
{
	delete[] arr;
}

template void destroy<int>(int*, int);
template void destroy<float>(float*, int);
template void destroy<double>(double*, int);

template <typename T>
void destroy(T** arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}

template void destroy<int>(int**, int, int);
template void destroy<float>(float**, int, int);
template void destroy<double>(double**, int, int);