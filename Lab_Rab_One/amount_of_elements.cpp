#include "Include.h"

template <typename T>
int amount_of_elements(T* arr, int len, T A, T B)//количество элементов
{
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > A && arr[i] < B)
        {
            count = count++;
        }
    }
    return count;
}

template int amount_of_elements<int>(int*, int, int, int);
template int amount_of_elements<float>(float*, int, float, float);
template int amount_of_elements<double>(double*, int, double, double);