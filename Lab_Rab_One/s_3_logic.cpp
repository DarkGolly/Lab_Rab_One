#include "Include.h"

bool s_3_logic()
{
    cout << "Seminar 3\n";
    int length = 0;//длина
    
    length = enter_length(length);

    double* arr = data_enter(length);//инициализируем динамический массив, передавая в функцию переменную для длины, чтобы потом её изменить
    
    system("cls");//чистим консоль
     
    menu_s_3(arr, length);//вызываем меню 3 семинара
    destroy(arr, length);//удаляем динамический массив
    return true;
}