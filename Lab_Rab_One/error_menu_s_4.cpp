#include "Include.h"

void menu_error_s_4(int** arr, int& rows, int& cols)//меню выбора действий в случае ошибки
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