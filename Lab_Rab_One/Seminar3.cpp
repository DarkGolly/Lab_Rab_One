#include "Include.h"

void Seminar3()
{
    int i, j;
    double A, B;
    int n;
    double s = 0;
    cin >> A >> B >> n;
    double* m = new double[n];
    for (i = 0; i < n; i++)
    {
        cin >> m[i];
    }
    kol(m, n, A, B);
    sum(m, n);
}