#include "Include.h"

double* sorting_s_3(const double* arr, const int& size)//быстрая сортировка
{
    double* newArr = new double[size];

    for (int i = 0; i < size; ++i) 
    {
        newArr[i] = arr[i];
    }
    newArr = qsort_array(newArr, size);
    return newArr;
}
double* qsort_array(double* numbers, int size)
{
    if (size < 2)
        return numbers;
    double pivot = numbers[0];
    int size_l = 0, size_r = 0;
    int newsize = size - 1;
    double* left_arr = new double[newsize];
    double* right_arr = new double[newsize];

    double absPivot = pivot;
    for (int j = 0; j < size - 1; ++j)
    {
        double absNum = numbers[j + 1];
        if (fabs(absNum) >= fabs(absPivot)) 
        {
            left_arr[size_l] = numbers[j + 1];
            size_l++;
        }
    }
    for (int j = 0; j < size - 1; ++j) 
    {
        double absNum = numbers[j + 1];
        if (fabs(absNum) < fabs(absPivot))
        {
            right_arr[size_r] = numbers[j + 1];
            size_r++;
        }
    }
    left_arr = qsort_array(left_arr, size_l);
    right_arr = qsort_array(right_arr, size_r);
    for (int i = 0; i < size_l; ++i)
        numbers[i] = left_arr[i];
    numbers[size_l] = pivot;

    for (int i = 0; i < size_r; ++i) 
        numbers[size_l + 1 + i] = right_arr[i];

    delete[]left_arr;
    delete[]right_arr;
    return numbers;
}
//double* sorting_s_3(const int& size, double* arr)//быстрая сортировка
//{
//    double* new_array = new double[size];
//    for (int i = 0; i < size; i++) {
//        new_array[i] = arr[i];
//    }
//    qsort(new_array, size, sizeof(double), compareing);
//    return new_array;
//}
//
//int compareing(const void* i, const void* j)
//{
//    double a = *(double*)i, b = *(double*)j;
//    if (a < 0.0) a *= -1;
//    if (b < 0.0) b *= -1;
//
//    if (a > b) return -1;
//    else if (a == b) return 0;
//    else return 1;
//}

