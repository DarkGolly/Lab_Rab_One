#include "Include.h"

int** shift_right(int &rows, int &cols, int** new_arr)
{
    if (array_check(rows, cols, new_arr))
    {//в случае не корректности массива, предлагаем либо ввести новый массив, либо выйти в меню
        new_arr = menu_error_s_4(new_arr, rows, cols);
    }
    else
    {
        cout << "To move right\n\n";
        cout << "Enter the number of offsets to the right\n--->:";

        int quantity = 0;

        do
        {
            quantity = check(quantity);//вводим кол-во сдвигов
            if ((findNonZeroStep(quantity) || widthEqualsOffset(rows, quantity)) == false)
            {
                break;
            }
        } while (true);

        for (int ch = 0; ch < quantity; ch++)
        {
            for (int j = cols - 1; j > 0; j--)
            {
                for (int i = 0; i < rows; i++)
                {
                    swap(new_arr[i][j], new_arr[i][j - 1]);
                }
            }
        }
    }
    return new_arr;
}