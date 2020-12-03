#include "Include.h"

//кол-во элементов между A и B
template <typename T>
void print_quantity(T* arr, int len)
{
    int count = 0;
    T A;
    T B;
    bool result;

    while (true)
    {
        result = cin_distance(A, B, arr, len);//вводим дистанцию и проверяем на корректность
        if (result == true)
        {
            count = amount_of_elements(arr, len, A, B);//кол-во элементов
            break;
        }
    }
    cout << "Quantity is " << count << "\n";
}

template void print_quantity<int>(int*, int);
template void print_quantity<float>(float*, int);
template void print_quantity<double>(double*, int);