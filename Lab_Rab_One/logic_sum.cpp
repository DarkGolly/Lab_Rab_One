#include "Include.h"

double* logic_sum(double* arr, int& len)
{

    cout << "sum of elements after maximum\n\n";
    double sum = 0.0;
    int max_id = 0;
    int i = 0;
    double max = -9999999999.9;
    
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
        arr = equality_test(len, arr, max, max_id, flag);//�������� ���� �� ���-�� ���������� � ���������� ����

        if (flag)//���� ���� ��������� ��������� ��� �������������, �� ���������� �����
        {
            sum = search_sum(arr, len, max_id, sum);
            cout << "The sum of elements located after the maximum element is " << sum << "\n";
            return arr;//������� �� ����� � ������������ � ����
        }
        else//���� �� ����, �� ������� ������������ �����
        {
            return arr;
        }    
    }
    return arr;
}