#include "Include.h"

void s_3()
{
    cout << "Seminar 3\n";
    int i;
    int length = 0;
    const int maxlengthOfArray = 50;

    cout << "Enter the length of the array:\n";
    cin >> length;//������ ����� �������
    cout << endl;
    
    //�������� �� ������������ ����� ����� �������
    while (true)
    {
        if (length <= 0 || length > maxlengthOfArray)
        {
            cout << "\nBulding impossible" << endl;
            cout << "\nEnter the size of the array -->";
            cin >> length;
        }
        else
            break;
    }
    
    double* Array = new double[length];
    data_enter(length, Array);
    system("cls");
     
    menu_s_3(Array, length);
    
    
}