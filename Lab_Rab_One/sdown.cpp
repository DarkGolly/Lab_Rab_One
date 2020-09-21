#include "Include.h"
//функция на сдвиг вниз
int** sdown(int n, int m, int** arr, int l, int i, int j)
{
    for (int ch = 0; ch < l; ch++)
    {
        for (i = n - 1; i > 0; i--)
        {
            for (j = 0; j < m; j++)
            {
                swap(arr[i][j], arr[i - 1][j]);


            }
        }

    }
    return arr;
}