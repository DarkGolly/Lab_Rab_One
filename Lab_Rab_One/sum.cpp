#include "Include.h"

bool sum(double* arr, int len)
{
    cout << "sum of elements after maximum\n";
    double sum = 0.0;
    int max_id = 0;
    int i = 0;
    double max = -1;
    
    bool flag = true;

    display_array(len, arr);//�������
    while (flag)
    {
        for (i = 0; i < len; i++)
        {
            if (arr[i] > max)//������� ��������
            {
                max = arr[i];//���������� ��������
                max_id = i;//���������� ��� ����
            }
        }
        flag = equality_test(len, arr, max, max_id);//�������� ���� �� ���-�� ���������� � ���������� ����

        if (flag)//���� ���� ��������� ��������� ��� �������������, �� ���������� �����
        {
            flag = wrong_id(arr, len, max, max_id);//������������ �������� ���������� �������� ������� ����� ������ ��� ����� � ����
        }
        else//���� �� ����, �� ������� ������������ �����
        {
            sum = search_sum(arr, len, max_id, sum);
            cout << "The sum of elements located after the maximum element is " << sum << "\n";
            return true;//������� �� ����� � ������������ � ����
        }    
    }
    return false;
}