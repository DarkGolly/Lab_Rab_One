#include "Include.h"

//���-�� ��������� ����� A � B
void quantity(double* arr, int len, double A, double B)
{
    int count = 0;
    int i;
    for (i = 0; i < len; i++)
    {
        if (arr[i] >= A && arr[i] <= B)
        {
            count = count++;
        }
    }
    cout << count << fixed << setprecision(6) << " ";
}