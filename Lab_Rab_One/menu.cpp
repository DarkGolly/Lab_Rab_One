#include "Include.h"

void menu()
{
    char a;
    
    while (true)
    {  
        text_menu();
        cin >> a;
        if (a == '0')
        {
            cout << "\nGood bay!";
            break;
        }
        switch (a)
        {
        case '3':
            system("cls");//������ �������
            s_3_logic();//�������� 3 �������
            break;
        case '4':
            system("cls");
            s_4();
            break;
        case '5':
            system("cls");
            s_5();
            break;
        default:
            system("cls");
            cout << "ATTENTION!!! \nchoose number seminar again:";
            break;
        }     
    }
}