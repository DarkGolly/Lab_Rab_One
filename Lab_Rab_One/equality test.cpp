#include "Include.h"

double* equality_test (int& len, double* arr, double& max, int& max_id, bool& flag)//проверка равенства
{
    bool check_dig = false;
    int temp_id = 0, temp_dig = 0;
    while (true)
    {
        if (len <= 2)
        {
            cout << "The amount cannot be found as there must be at least 3 items!\n\n";
            arr = wrong_len(arr, len, check_dig);//пользователь выбирает дальнейшие действия вводить новый массив или выйти в меню
            if (check_dig == true)
            {
                check_dig = false;
                continue;
            }
            else
                flag = false;
                return arr;
        }
        max = -999999.9;
        for (int i = 0; i < len; i++)
        {
            if (arr[i] > max)//находим максимум
            {
                max = arr[i];//запоминаем максимум
                max_id = i;//запоминаем его айди
            }
        }
        temp_dig = 0;
        for (int i = 0; i < len; i++)
        {
            if (arr[i] == max)//находим максимумы
            {
                temp_dig++;
                if (temp_dig >= 2)//если их количество больше 2х, то 
                {
                    check_dig = true; // это будет истина
                }
            }
        }
        while (true)
        {
            if (check_dig)// и тут мы выбираем максимальный элемент, т.е. его айди и если он будет максимум то присваиваем айди максимума
            {
                cout << "Select the ID of the maximum element to find the sum of the following elements\n";
                temp_id = check(temp_id);
                if (arr[temp_id] == max && temp_id != len - 1 && temp_id != len - 2)
                {
                    max_id = temp_id;//т.к. max_id принимал адрес, то это значение будет и в функции которая вызывала
                }
                else
                {
                    cout << "The maximum element must not be the last or the penultimate one! \nSelect again.\n";
                    continue;
                }
            }
            if (max_id == len - 1 || max_id == len - 2)//проверка айди максимума последнее или предпоследнее
            {
                cout << "The selected item must not be the last or penultimate!\n";
                arr = wrong_len(arr, len, check_dig);//пользователь выбирает дальнейшие действия вводить новый массив или выйти в меню
                if (check_dig == true)
                {
                    check_dig = false;
                    break;
                }
                else
                    flag = false;
                return arr;
            }
            else
            {
                flag = true;
                return arr;
            }
        }
    }
}