#include "Include.h"

bool s_5()
{
    fstream fl;
 
    fl.open("file.txt", ios::in | ios::out); //2 - ������, 3 - ������, 1 - ����
    if (fl.is_open())
    {
        menu_s5(fl);
    }
    else
    {
        cout << "Error!!!\n";
    }
    
    fl.close();
    return true;
}