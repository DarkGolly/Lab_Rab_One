#include "Include.h"

//функция на сдвиг вниз
int** shift_down(int& rows, int& cols, int** new_arr)
{
    if (array_check(rows, cols, new_arr))//проверяем массив корректность
    {//в случае не корректности массива, предлагаем либо ввести новый массив, либо выйти в меню
        menu_error_s_4(new_arr, rows, cols);
    }
    else
    {
        cout << "To move down\n\n";
        cout << "Enter the number of shifts\n--->:";

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
            for (int i = rows - 1; i > 0; i--)
            {
                for (int j = 0; j < cols; j++)
                {
                    swap(new_arr[i][j], new_arr[i - 1][j]);//заменяем местами
                }
            }
        }
    }
    return new_arr;
}