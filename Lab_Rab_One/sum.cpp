#include "Include.h"

void sum(double* m, int n, double max, double s)
{
    int nmax, i;
    max = m[0], nmax = 0;
    for (i = 0; i < n; i++)
    {
        if (m[i] > max)
        {
            max = m[i];
            nmax = i;
        }
    }
    for (i = nmax + 1; i < n; i++)
    {
        s += m[i];
    }
    double t = 0;
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < (n - 1); i++)
        {
            if ((fabs(m[i + 1])) > (fabs(m[i])))
            {
                t = m[i];
                m[i] = m[i + 1];
                m[i + 1] = t;
            }
        }
    }
    cout << s << "\n";
    for (i = 0; i < n; i++)
        cout << fixed << setprecision(2) << m[i] << " ";
}