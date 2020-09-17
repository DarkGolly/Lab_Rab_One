#include "Seminar3.h"


//функци€ на сдвиг вниз
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

//функци€ на сдвиг вправо
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