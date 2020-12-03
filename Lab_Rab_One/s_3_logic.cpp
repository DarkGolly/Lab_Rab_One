#include "Include.h"

template <typename T>
bool s_3_logic()
{
    cout << "Seminar 3\n";
    int length = 0;//длина
    
    length = enter_length(length);

    T* arr = data_enter<T>(length);//инициализируем динамический массив, передавая в функцию переменную для длины, чтобы потом её изменить
    
    system("cls");//чистим консоль
     
    menu_s_3(arr, length);//вызываем меню 3 семинара
    return true;
}

template bool s_3_logic<int>();
template bool s_3_logic<float>();
template bool s_3_logic<double>();