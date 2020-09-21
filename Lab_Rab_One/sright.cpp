#include "Include.h"

//функция на сдвиг вправо
int** sright(int n, int m, int** arr, int l, int i, int j)
{

    for (int ch = 0; ch < l; ch++)
    {
        for (j = m - 1; j > 0; j--)
        {

            for (i = 0; i < n; i++)
            {

                swap(arr[i][j], arr[i][j - 1]);
            }
        }
    }
    return arr;
}