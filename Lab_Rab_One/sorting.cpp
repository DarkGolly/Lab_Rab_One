#include "Include.h"

double* sorting_s_3(const int& size, double* arr)//быстрая сортировка
{
    double* new_array = new double[size];
    for (int i = 0; i < size; i++) {
        new_array[i] = arr[i];
    }
    qsort(new_array, size, sizeof(double), compareing);
    return new_array;
}

int compareing(const void* i, const void* j)
{
    double a = *(double*)i, b = *(double*)j;
    if (a < 0.0) a *= -1;
    if (b < 0.0) b *= -1;

    if (a > b) return -1;
    else if (a == b) return 0;
    else return 1;
}