#include "Include.h"

bool shift_right(int &rows, int &cols, int** arr)
{
    if (array_check(rows, cols, arr))
    {//в случае не корректности массива, предлагаем либо ввести новый массив, либо выйти в меню
        menu_error_s_4(arr, rows, cols);
    }
    else
    {
        cout << "To move right\n\n";
        cout << "Enter the number of offsets to the right\n--->:";
        int quantity = 0;
        quantity = check(quantity);
        display_array(rows, cols, arr);
        for (int ch = 0; ch < quantity; ch++)
        {
            for (int j = cols - 1; j > 0; j--)
            {
                for (int i = 0; i < rows; i++)
                {
                    swap(arr[i][j], arr[i][j - 1]);
                }
            }
        }
        display_array(rows, cols, arr);
    }
    return true;
}