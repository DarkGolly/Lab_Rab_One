#include "Include.h"

double search_sum(double* arr, int len, int max_id, double sum)//поиск суммы
{
    for (int i = max_id + 1; i < len; i++)
    {
        sum += arr[i];
    }
    return sum;
}