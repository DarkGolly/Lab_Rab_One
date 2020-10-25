#include "Include.h"

//функция на сдвиг вниз
void shift_down(int& rows, int& cols, int** arr)
{
    while (true)
    {
        if (array_check(rows, cols, arr))
        {
            cout << "1 - change matrix\n0 - exit to menu\n";
            char temp;
            cin >> temp;
            switch (temp)
            {
            case '1':
                destroy(arr, rows, cols);
                arr = data_enter(rows, cols);
                break;
            case '0':
                return;
                break;
            default:
                cout << "Enter the action again";
                system("pause");
                system("cls");
                break;
            }
            
        }
        else
        {
            cout << "To move down\n\n";
            cout << "Enter the number of shifts\n--->:";
            int quantity = 0;
            quantity = check(quantity);
            display_array(rows, cols, arr);
            for (int ch = 0; ch < quantity; ch++)
            {
                for (int i = rows - 1; i > 0; i--)
                {
                    for (int j = 0; j < cols; j++)
                    {
                        swap(arr[i][j], arr[i - 1][j]);
                    }
                }
            }
            display_array(rows, cols, arr);
            break;
        }
    }
}