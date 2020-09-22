#include "Include.h"


void Seminar3()
{
    int i, j, n, m, d, l;
    cout << "¬ведите размер массива:";
    cin >> n >> m;

    int** arr = new int* [n];
    for (i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    cin >> d >> l;

    if (d == 0)
    {
        sdown(n, m, arr, l, i, j);

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    if (d == 1)
    {
        sright(n, m, arr, l, i, j);

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
}