#include "Include.h"

void menu()
{
    cout << "Hello dear user!\n";
    cout << "This program has 3 seminars. This is:\n";
    cout << "Seminar number 3.\n";
    cout << "Seminar number 4.\n";
    cout << "Seminar number 5.\n";
    cout << "\n\n\n\nEnter '0' and press \"Enter\" to exit the program.\n\n";
    int a;
    cout << "Choose number seminar:";
    while (true)
    {  
        while (!(cin >> a) || (cin.peek() != '\n'))
        {
            cin.clear();
            while (cin.get() != '\n');
            cout << "Error!\nEnter the number:" << endl;
        }
        if (a == 0)
        {
            cout << "Good bay!";
            break;
        }
        switch (a)
        {
        case 3:
            system("cls");
            seminar_3();
            break;
        case 4:
            system("cls");
            //seminar_4();
            break;
        case 5:
            system("cls");
            //seminar_5();
            break;
        default:
            cout << "Attention!!! \nchoose number seminar again:";
            break;
        }     
    }
}