#include "Include.h"

//������� �� ����� ����
template <typename T>
T** shift_down(int& rows, int& cols, T** new_arr)
{
    if (array_check(rows, cols, new_arr))//��������� ������ ������������
    {//� ������ �� ������������ �������, ���������� ���� ������ ����� ������, ���� ����� � ����
        new_arr = menu_error_s_4(new_arr, rows, cols);
    }
    else
    {
        cout << "To move down\n\n";
        cout << "Enter the number of shifts\n--->:";

        int quantity = 0;
        do
        {
            quantity = check(quantity);//������ ���-�� �������
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
                    swap(new_arr[i][j], new_arr[i - 1][j]);//�������� �������
                }
            }
        }
    }
    return new_arr;
}

template int** shift_down<int>(int&, int&, int**);
template float** shift_down<float>(int&, int&, float**);
template double** shift_down<double>(int&, int&, double**);