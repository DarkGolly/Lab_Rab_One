#include "Include.h"

int check(int a) 
{
    //�� ��������� �� ������������� ��������
    while (!(cin >> a) || (cin.peek() != '\n'))
    {
        system("cls");
        cin.clear();
        while (cin.get() != '\n');
        cout << "Error!\nEnter the number from 3 to 5:" << endl;
    }
    return a;
}