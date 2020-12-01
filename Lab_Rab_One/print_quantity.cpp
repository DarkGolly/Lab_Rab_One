#include "Include.h"

//кол-во элементов между A и B
void print_quantity(double* arr, int len)
{
    int count = 0;
    double A;
    double B;
    bool result;

    while (true)
    {
        result = cin_distance(A, B, arr, len);//вводим дистанцию и проверяем на корректность
        if (result == true)
        {
            count = amount_of_elements(arr, len, A, B);//кол-во элементов
            break;
        }
        else
        {
            result = cin_distance(A, B, arr, len);
        }
    }
    cout << "Quantity is " << count << "\n";
}