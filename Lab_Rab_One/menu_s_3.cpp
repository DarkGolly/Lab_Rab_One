#include "Include.h"

void menu_s_3()
{
    cout << "Seminar 3\n";
    int i;
    int length = 0;
    const int maxlengthOfArray = 50;

    cout << "Enter the length of the array:\n";
    cin >> length;//вводим длину массива
    cout << endl;
    
    //проверка на корректность ввода длины массива
    while (true)
    {
        if (length <= 0 || length > maxlengthOfArray)
        {
            cout << "\nBulding impossible" << endl;
            cout << "\nEnter the size of the array -->";
            cin >> length;
        }
        else
            break;
    }
    
    double* Array = new double[length];
    data_enter(length, Array);
    system("cls");
    cout << endl << "Unsorted massive:" << endl;//выводим не отсортированный массив
    display_array(length, Array);
     
    s_3(Array, length);
    
    
}