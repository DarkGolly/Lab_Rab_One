#include "Include.h"

int** menu_error_s_4(int** arr, int& rows, int& cols)//меню выбора действий в случае ошибки
{
    while (true)
    {
        cout << "1 - change matrix\n0 - exit to menu\n";
        char temp;
        cin >> temp;
        switch (temp)
        {
        case '1':
            destroy(arr, rows, cols);
            rows = enter_length(rows);
            cols = enter_length(cols);
            arr = data_enter(rows, cols);
            return arr;
        case '0':
            return arr;
        default:
            cout << "Enter the action again";
            system("pause");
            system("cls");
        }
    }
}