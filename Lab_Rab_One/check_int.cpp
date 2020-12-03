#include "Include.h"

template <typename T>
T check(T a) 
{
    //�� ��������� �� ������������� ��������
    while (!(cin >> a) || (cin.peek() != '\n'))//������ ����� � ������� �� ��������� ������ � ������
    {
        system("cls");
        cin.clear();//������ �����
        while (cin.get() != '\n');//��������� �� ������ �� ����� �������
        cout << "Error!\nEnter again:" << endl;
    }
    return a;
}

template int check<int>(int);
template float check<float>(float);
template double check<double>(double);