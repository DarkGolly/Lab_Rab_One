#include "Include.h"

//������� �� ����� ����
bool shift_down(int& rows, int& cols, int** arr)
{
    if (array_check(rows, cols, arr))//��������� ������ ������������
    {//� ������ �� ������������ �������, ���������� ���� ������ ����� ������, ���� ����� � ����
        menu_error_s_4(arr, rows, cols);
    }
    else
    {
        cout << "To move down\n\n";
        cout << "Enter the number of shifts\n--->:";

        int quantity = 0;
        quantity = check(quantity);//������ ���-�� �������
        display_array(rows, cols, arr);//������� ������
        for (int ch = 0; ch < quantity; ch++)
        {
            for (int i = rows - 1; i > 0; i--)
            {
                for (int j = 0; j < cols; j++)
                {
                    swap(arr[i][j], arr[i - 1][j]);//�������� �������
                }
            }
        }
        display_array(rows, cols, arr);
    }
    return true;
}