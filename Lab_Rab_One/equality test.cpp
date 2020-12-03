#include "Include.h"

double* equality_test (int& len, double* arr, double& max, int& max_id, bool& flag)//�������� ���������
{
    bool check_dig = false;
    int temp_id = 0, temp_dig = 0;
    while (true)
    {
        if (len <= 2)
        {
            cout << "The amount cannot be found as there must be at least 3 items!\n\n";
            arr = wrong_len(arr, len, check_dig);//������������ �������� ���������� �������� ������� ����� ������ ��� ����� � ����
            if (check_dig == true)
            {
                check_dig = false;
                continue;
            }
            else
                flag = false;
                return arr;
        }
        max = -999999.9;
        for (int i = 0; i < len; i++)
        {
            if (arr[i] > max)//������� ��������
            {
                max = arr[i];//���������� ��������
                max_id = i;//���������� ��� ����
            }
        }
        temp_dig = 0;
        for (int i = 0; i < len; i++)
        {
            if (arr[i] == max)//������� ���������
            {
                temp_dig++;
                if (temp_dig >= 2)//���� �� ���������� ������ 2�, �� 
                {
                    check_dig = true; // ��� ����� ������
                }
            }
        }
        while (true)
        {
            if (check_dig)// � ��� �� �������� ������������ �������, �.�. ��� ���� � ���� �� ����� �������� �� ����������� ���� ���������
            {
                cout << "Select the ID of the maximum element to find the sum of the following elements\n";
                temp_id = check(temp_id);
                if (arr[temp_id] == max && temp_id != len - 1 && temp_id != len - 2)
                {
                    max_id = temp_id;//�.�. max_id �������� �����, �� ��� �������� ����� � � ������� ������� ��������
                }
                else
                {
                    cout << "The maximum element must not be the last or the penultimate one! \nSelect again.\n";
                    continue;
                }
            }
            if (max_id == len - 1 || max_id == len - 2)//�������� ���� ��������� ��������� ��� �������������
            {
                cout << "The selected item must not be the last or penultimate!\n";
                arr = wrong_len(arr, len, check_dig);//������������ �������� ���������� �������� ������� ����� ������ ��� ����� � ����
                if (check_dig == true)
                {
                    check_dig = false;
                    break;
                }
                else
                    flag = false;
                return arr;
            }
            else
            {
                flag = true;
                return arr;
            }
        }
    }
}