#include "Include.h"

template <typename T>
bool s_3_logic()
{
    cout << "Seminar 3\n";
    int length = 0;//�����
    
    length = enter_length(length);

    T* arr = data_enter<T>(length);//�������������� ������������ ������, ��������� � ������� ���������� ��� �����, ����� ����� � ��������
    
    system("cls");//������ �������
     
    menu_s_3(arr, length);//�������� ���� 3 ��������
    return true;
}

template bool s_3_logic<int>();
template bool s_3_logic<float>();
template bool s_3_logic<double>();