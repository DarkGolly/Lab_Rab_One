#include "Include.h"

int check(int a) 
{
    //не принимает не целочисленные значени€
    while (!(cin >> a) || (cin.peek() != '\n'))//вводим число и смотрим на следующий символ в потоке
    {
        system("cls");
        cin.clear();//чистит поток
        while (cin.get() != '\n');//считываем из потока по одому символу
        cout << "Error!\nEnter again:" << endl;
    }
    return a;
}