#include "Include.h"
void kol(double m[], int n, double A, double B)
{
    double k = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (m[i] >= A && m[i] <= B)
        {
            k = k++;
        }
    }
    cout << k << fixed << setprecision(6) << " ";
}