#include "Include.h"

bool s_3_logic()
{
    cout << "Seminar 3\n";
    int length = 0;//�����
    
    double* arr = data_enter(length);//�������������� ������������ ������, ��������� � ������� ���������� ��� �����, ����� ����� � ��������
    
    system("cls");//������ �������
     
    menu_s_3(arr, length);//�������� ���� 3 ��������
    destroy(arr, length);//������� ������������ ������
    return 1;
}