#include "Include.h"

double* logic_sum(double* arr, int& len)
{

    cout << "sum of elements after maximum\n\n";
    double sum = 0.0;
    int max_id = 0;
    int i = 0;
    double max = -9999999999.9;
    
    bool flag = true;
    

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
        arr = equality_test(len, arr, max, max_id, flag);//проводим тест на кол-во максимумов и возвращаем айди

        if (flag)//если айди максимума последнее или предпоследнее, то предлогаем выбор
        {
            sum = search_sum(arr, len, max_id, sum);
            cout << "The sum of elements located after the maximum element is " << sum << "\n";
            return arr;//выходим из цикла и возвращаемся в меню
        }
        else//если всё окей, то находим долгожданную сумму
        {
            return arr;
        }    
    }
    return arr;
}