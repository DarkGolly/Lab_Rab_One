#include "Include.h"

void sum(double* arr, int len)
{
    double sum = 0.0;
    int max_id = 0;
    int i = 0;
    double max = -1;
    
    bool flag = true;
    char temp = ' ';

    display_array(len, arr);//выводим
    while (flag)
    {
        for (i = 0; i < len; i++)
        {
            if (arr[i] > max)//находим максимум
            {
                max = arr[i];//запоминаем максимум
                max_id = i;//запоминаем его айди
            }
        }
        equality_test(len, arr, max, max_id);//проводим тест на кол-во максимумов

        if (max_id == len-1 || max_id == len-2 )//если айди максимума последнее или предпоследнее, то предлогаем выбор
        {
            cout << "Error!\nThe maximum cannot be found!\n\nIf you want to re-enter the data, enter \"1\".";
            cout << "Enter 0 to return to the menu.\n";
            cin >> temp;
            switch (temp)
            {
            case '0':
                flag = false;//выходим из цикла и возвращаемся в меню
                break;
            case '1':
                system("cls");
                destroy(arr, len);//удаляем текущий массив 
                arr = data_enter(len);// и создаём новый
                max = 0;//обнуляем все значения и выполняем по новой
                max_id = 0;
                break;

            default:
                cout << "Wrong action selected!\n Please, enter again!\n";
                break;
            }
        }
        else//если всё окей, то находим долгожданную сумму
        {
            for (i = max_id + 1; i < len; i++)
            {
                sum += arr[i];
            }
            cout << "The sum of elements located after the maximum element is " << sum << "\n";
            flag = false;//выходим из цикла и возвращаемся в меню
        }    
    }
}