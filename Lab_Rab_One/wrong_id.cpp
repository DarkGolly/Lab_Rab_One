#include "Include.h"

bool wrong_id(double* arr, int& len, double& max, int& max_id)//в случай неверного айди даём выбр действий
{
    cout << "Error!\nThe maximum cannot be found!\n\nIf you want to re-enter the data, enter \"1\".";
    cout << "Enter 0 to return to the menu.\n";
    char temp = ' ';
    cin >> temp;
    switch (temp)
    {
    case '0':
        return false;//выходим из цикла и возвращаемся в меню
    case '1':
        system("cls");
        destroy(arr, len);//удаляем текущий массив 
        arr = data_enter(len);// и создаём новый
        max = 0.0;//обнуляем все значения и выполняем по новой
        max_id = 0;
        return true;//продолжаем работу

    default:
        cout << "Wrong action selected!\n Please, enter again!\n";
        break;
    }
    return true;
}