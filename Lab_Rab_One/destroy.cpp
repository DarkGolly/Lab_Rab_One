#include "Include.h"
//удаляем массивы
template <typename T>
void destroy(T *arr)
{
	delete[] arr;
}

template void destroy<int>(int*);
template void destroy<float>(float*);
template void destroy<double>(double*);

template <typename T>
void destroy(T** arr, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		delete arr[i];
	}
	delete[] arr;
}

template void destroy<int>(int**, int);
template void destroy<float>(float**, int);
template void destroy<double>(double**, int);