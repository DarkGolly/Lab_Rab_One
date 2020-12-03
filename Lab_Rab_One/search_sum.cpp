#include "Include.h"

template <typename T>
T search_sum(T* arr, int len, int max_id, T sum)//поиск суммы
{
    for (int i = max_id + 1; i < len; i++)
    {
        sum += arr[i];
    }
    return sum;
}

template int search_sum<int>(int*, int, int, int);
template float search_sum<float>(float*, int, int, float);
template double search_sum<double>(double*, int, int, double);