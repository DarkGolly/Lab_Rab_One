#include "Include.h"

template <typename T>
T* logic_sum(T* arr, int& len)
{

    cout << "sum of elements after maximum\n\n";
    T sum = 0;
    int max_id = 0;
    int i = 0;
    T max = -9999999999;
    
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

template int* logic_sum<int>(int*, int&);
template float* logic_sum<float>(float*, int&);
template double* logic_sum<double>(double*, int&);