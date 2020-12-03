#include "Include.h"

template <typename T>
T* sorting_s_3(const T* arr, const int& size)//быстрая сортировка
{
    T* newArr = new T[size];

    for (int i = 0; i < size; ++i) 
    {
        newArr[i] = arr[i];
    }
    qsort_array(newArr, size);
    return newArr;
}

template int* sorting_s_3<int>(const int*, const int&);
template float* sorting_s_3<float>(const float*, const int&);
template double* sorting_s_3<double>(const double*, const int&);

template <typename T>
void qsort_array(T* numbers, int size)
{
    if (size < 2)
        return;
    T pivot = numbers[0];
    int size_l = 0, size_r = 0;
    int newsize = size - 1;
    T* left_arr = new T[newsize];
    T* right_arr = new T[newsize];

    T absPivot = pivot;
    for (int j = 0; j < size - 1; ++j)
    {
        T absNum = numbers[j + 1];
        if (fabs(absNum) >= fabs(absPivot) && size_l < newsize) 
        {
            left_arr[size_l] = numbers[j + 1];
            size_l++;
        }
    }
    for (int j = 0; j < size - 1; ++j) 
    {
        T absNum = numbers[j + 1];
        if (fabs(absNum) < fabs(absPivot) && size_r < newsize)
        {
            right_arr[size_r] = numbers[j + 1];
            size_r++;
        }
    }
    qsort_array(left_arr, size_l);
    qsort_array(right_arr, size_r);
    for (int i = 0; i < size_l; ++i)
        numbers[i] = left_arr[i];
    numbers[size_l] = pivot;

    for (int i = 0; i < size_r; ++i)
        numbers[size_l + 1 + i] = right_arr[i];

    delete[]left_arr;
    delete[]right_arr;
}

template void qsort_array<int>(int*, int);
template void qsort_array<float>(float*, int);
template void qsort_array<double>(double*, int);