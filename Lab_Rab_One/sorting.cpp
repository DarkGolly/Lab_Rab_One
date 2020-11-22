#include "Include.h"

double* sorting_s_3(int len, double* arr)//быстрая сортировка
{
    double* new_arr = new double [len];
    int const lenD = len;
    double pivot = 0;
    int ind = lenD / 2;
    int i, j = 0, k = 0;

    if (lenD > 1) 
    {
        double* L = new double[lenD];
        double* R = new double[lenD];
        pivot = arr[ind];
        for (i = 0; i < lenD; i++) 
        {
            if (i != ind) 
            {
                if (arr[i] < pivot) 
                {
                    L[j] = arr[i];
                    j++;
                }
                else 
                {
                    R[k] = arr[i];
                    k++;
                }
            }
        }
        sorting_s_3(j, L);
        sorting_s_3(k, R);
        for (int cnt = 0; cnt < lenD; cnt++) 
        {
            if (cnt < j) 
            {
                new_arr[cnt] = L[cnt];;
            }
            else if (cnt == j) 
            {
                new_arr[cnt] = pivot;
            }
            else
            {
                new_arr[cnt] = R[cnt - (j + 1)];
            }
        }
    }
    return new_arr;
}