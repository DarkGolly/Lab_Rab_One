#include "Include.h"

//���-�� ��������� ����� A � B
void print_quantity(double* arr, int len)
{
    int count = 0;
    double A;
    double B;
    bool result;

    while (true)
    {
        result = cin_distance(A, B, arr, len);//������ ��������� � ��������� �� ������������
        if (result == true)
        {
            count = amount_of_elements(arr, len, A, B);//���-�� ���������
            break;
        }
        else
        {
            result = cin_distance(A, B, arr, len);
        }
    }
    cout << "Quantity is " << count << "\n";
}