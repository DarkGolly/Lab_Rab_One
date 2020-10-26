#include "Include.h"

void equality_test (int len, double* arr, double& max, int& max_id)
{
    bool check_dig = false;
    int temp_id = 0, temp_dig = 0;

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
    if (check_dig)// и тут мы выбираем максимальный элемент, т.е. его айди и если он будет максимум то присваиваем айди максимума
    {
        cout << "Select the ID of the maximum element to find the sum of the following elements\n";
        temp_id = check(temp_id);
        if (arr[temp_id] == max)
        {
            max_id = temp_id;//т.к. max_id принимал адрес, то это значение будет и в функции которая вызывала
        }
    }
}