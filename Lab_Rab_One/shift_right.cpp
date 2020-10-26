#include "Include.h"

void shift_right(int &rows, int &cols, int** arr)
{
    if (array_check(rows, cols, arr))
    {//в случае не корректности массива, предлагаем либо ввести новый массив, либо выйти в меню
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
}