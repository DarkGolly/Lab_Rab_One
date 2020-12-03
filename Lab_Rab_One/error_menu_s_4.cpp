#include "Include.h"


template <typename T>
T** menu_error_s_4(T** arr, int& rows, int& cols)//меню выбора действий в случае ошибки
{
    while (true)
    {
        cout << "1 - change matrix\n0 - exit to menu\n";
        char temp;
        cin >> temp;
        switch (temp)
        {
        case '1':
            destroy(arr, rows);
            rows = enter_length(rows);
            cols = enter_length(cols);
            arr = data_enter<T>(rows, cols);
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

template int** menu_error_s_4<int>(int**, int&, int&);
template float** menu_error_s_4<float>(float**, int&, int&);
template double** menu_error_s_4<double>(double**, int&, int&);