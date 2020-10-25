#include "Include.h"

void s_3()
{
    cout << "Seminar 3\n";
    int length = 0;
    
    
    double* arr = data_enter(length);
    
    system("cls");
     
    menu_s_3(arr, length);
    destroy(arr, length);
    
    
}