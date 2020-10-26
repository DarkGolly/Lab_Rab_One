#include "Include.h"

void zam(fstream &fl)
{
    print_file(fl);

    bool flag = 0;
    char a;

    while (fl.get(a))
    {
        if (a == ' ' || a == '\n')
        {
            flag = 1;
            continue;
        }
        if (fl.tellg() == 1)
        {
            flag = 1;
        }
        if ((a == 'a') && flag)
        {
            a = 'A';
            zamena(fl.tellp(), a);
        }
        if ((a == 'e') && flag)
        {
            a = 'E';
            zamena(fl.tellp(), a);
        }
        if ((a == 'i') && flag)
        {
            a = 'I'; 
            zamena(fl.tellp(), a);
        }
        if ((a == 'o') && flag)
        {
            a = 'O';
            zamena(fl.tellp(), a);
        }
        if ((a == 'u') && flag)
        {
            a = 'U'; 
            zamena(fl.tellp(), a);
        }
        if ((a == 'y') && flag)
        {
            a = 'Y';
            zamena(fl.tellp(), a);
        }
        flag = 0;
    }
    print_file(fl);
}