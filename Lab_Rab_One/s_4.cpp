#include "Include.h"

template <typename T>
bool s_4()
{
    cout << "Seminar 4\n";
    int rows = 0, cols = 0;
    T **arr;

    rows = enter_length(rows);
    cols = enter_length(cols);

    arr = data_enter<T>(rows, cols);//присваиваем указателю указатель на двумерный массив

    system("cls");
    menu_s_4(rows, cols, arr);//вызов меню

    

    return true;
}

template bool s_4<int>();
template bool s_4<float>();
template bool s_4<double>();