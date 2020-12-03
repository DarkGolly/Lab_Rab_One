#include "Include.h"

template <typename T>
T check(T a) 
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

template int check<int>(int);
template float check<float>(float);
template double check<double>(double);