#include "Include.h"

bool s_4()
{
    cout << "Seminar 4\n";
    int rows = 0, cols = 0;
    int **arr;

    rows = enter_length(rows);
    cols = enter_length(cols);

    arr = data_enter(rows, cols);//����������� ��������� ��������� �� ��������� ������

    system("cls");
    menu_s_4(rows, cols, arr);//����� ����

    destroy(arr, rows, cols);//�������� ���������� ������������� �������

    return true;
}