#include "Include.h"

double* wrong_len(double* arr, int& len, bool& flag)
{
    while (true)
    {
        cout << "Error!\nThe maximum cannot be found!\nThe maximum should not be the last or penultimate element.\n\nIf you want to re-enter the data, enter \"1\".";
        cout << "Enter 0 to return to the menu.\n";
        char temp = ' ';
        cin >> temp;
        switch (temp)
        {
        case '0':
            flag = false;
            return arr;
            //������� �� ����� � ������������ � ����
        case '1':
            flag = true;
            system("cls");
            destroy(arr, len);//������� ������� ������ 
            len = enter_length(len);
            arr = data_enter(len);// � ������ �����
            return arr;//���������� ������

        default:
            cout << "Wrong action selected!\n Please, enter again!\n";
            system("pause");
            system("cls");
        }
    }
    return arr;
}