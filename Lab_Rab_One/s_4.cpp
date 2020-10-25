#include "Include.h"

void s_4()
{
    cout << "Seminar 4\n";
    int rows = 0, cols = 0;
    int **arr;
    arr = data_enter(rows, cols);
    system("cls");
    menu_s_4(rows, cols, arr);
    destroy(arr, rows, cols);

    
}