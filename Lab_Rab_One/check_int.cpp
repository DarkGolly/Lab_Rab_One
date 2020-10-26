#include "Include.h"

int check(int a) 
{
    //не принимает не целочисленные значения
    while (!(cin >> a) || (cin.peek() != '\n'))
    {
        cout << cin.peek();
        system("cls");
        cin.clear();
        while (cin.get() != '\n');
        cout << "Error!\nEnter again:" << endl;
    }
    cout << cin.peek();
    return a;
}