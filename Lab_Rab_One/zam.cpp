#include "Include.h"

 bool search_letter(fstream &fl)
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
            replacement(fl.tellp(), a);
        }
        if ((a == 'e') && flag)
        {
            a = 'E';
            replacement(fl.tellp(), a);
        }
        if ((a == 'i') && flag)
        {
            a = 'I'; 
            replacement(fl.tellp(), a);
        }
        if ((a == 'o') && flag)
        {
            a = 'O';
            replacement(fl.tellp(), a);
        }
        if ((a == 'u') && flag)
        {
            a = 'U'; 
            replacement(fl.tellp(), a);
        }
        if ((a == 'y') && flag)
        {
            a = 'Y';
            replacement(fl.tellp(), a);
        }
        flag = 0;
    }
    print_file(fl);
    return true;
}