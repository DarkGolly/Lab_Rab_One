#include "Include.h"

int amount_of_elements(double* arr, int len, double A, double B)//количество элементов
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