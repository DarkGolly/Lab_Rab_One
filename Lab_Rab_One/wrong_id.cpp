#include "Include.h"

bool wrong_id(double* arr, int& len, double& max, int& max_id)//� ������ ��������� ���� ��� ���� ��������
{
    cout << "Error!\nThe maximum cannot be found!\n\nIf you want to re-enter the data, enter \"1\".";
    cout << "Enter 0 to return to the menu.\n";
    char temp = ' ';
    cin >> temp;
    switch (temp)
    {
    case '0':
        return false;//������� �� ����� � ������������ � ����
    case '1':
        system("cls");
        destroy(arr, len);//������� ������� ������ 
        arr = data_enter(len);// � ������ �����
        max = 0.0;//�������� ��� �������� � ��������� �� �����
        max_id = 0;
        return true;//���������� ������

    default:
        cout << "Wrong action selected!\n Please, enter again!\n";
        break;
    }
    return true;
}