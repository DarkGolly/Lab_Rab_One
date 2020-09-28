#include "Include.h"

int check(int a) 
{
    //не принимает не целочисленные значения
    while (!(cin >> a) || (cin.peek() != '\n'))
    {
        cin.clear();
        while (cin.get() != '\n');
        cout << "Error!\nEnter the number:" << endl;
    }
    return a;
}