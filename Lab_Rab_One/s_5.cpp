#include "Include.h"

void s_5()
{
    const int ln = 1000;
    int n = 0;
    char c[ln] = "";
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
}