#include "Include.h"


template <typename T>
T* wrong_len(T* arr, int& len, bool& flag)
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
            //выходим из цикла и возвращаемся в меню
        case '1':
            flag = true;
            system("cls");
            destroy(arr, len);//удаляем текущий массив 
            len = enter_length(len);
            arr = data_enter<T>(len);// и создаём новый
            return arr;//продолжаем работу

        default:
            cout << "Wrong action selected!\n Please, enter again!\n";
            system("pause");
            system("cls");
        }
    }
    return arr;
}

template int* wrong_len<int>(int*, int&, bool&);
template float* wrong_len<float>(float*, int&, bool&);
template double* wrong_len<double>(double*, int&, bool&);