#include "Include.h"

void sorting_s_3(int len, double* arr)
{
    double t = 0;
    for (int i = 0; i < len; i++)
    {
        for (int i = 0; i < (len - 1); i++)
        {
            if ((fabs(arr[i + 1])) > (fabs(arr[i])))
            {
                t = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = t;
            }
        }
    }
}