#include "Include.h"

void menu()
{
    char a;
    cout << "Hello dear user!\n";
    cout << "This program has 3 seminars. This is:\n";
    cout << "Seminar number 3.\n";
    cout << "Seminar number 4.\n";
    cout << "Seminar number 5.\n";

    while (true)
    {  
        cout << "\nEnter the number from 3 to 5:" << endl;
        cout << "\n\n\n\nEnter '0' and press \"Enter\" to exit the program.\n\n";
        cout << "Choose number seminar:";
        cin >> a;
        if (a == '0')
        {
            cout << "\nGood bay!";
            break;
        }
        switch (a)
        {
        case '3':
            system("cls");
            s_3();
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