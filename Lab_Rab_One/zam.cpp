#include "Include.h"

void zam(fstream &fl)
{
    print_file(fl);
    cout << endl << endl;
    int i = -1;
    char a;
    fl.clear();
    cout << fl.cur << endl;
    fl.seekg(2);
    cout << fl.cur << endl;
    while (fl.get(a))
    {
        if (a == ' ')
        {
            i = 0;
            continue;
        }
        
        fl.seekg(2);
        cout << fl.cur << endl;
        //cout << a << endl;
        if ((a == 'a') && (i == 0))
        {
            a = 'A';
            fl.put(a);
            
        }
            
        if ((a == 'e') && (i == 0))
        {
            a = 'E';
            fl.put(a);
        }
            
        if ((a == 'i') && (i == 0))
        {
            a = 'I'; 
            fl.put(a);
        }
            
        if ((a == 'o') && (i == 0))
        {
            a = 'O';
            fl.put(a);
        }
            
        if ((a == 'u') && (i == 0))
        {
            a = 'U'; 
            fl.put(a);
        }
            
        if ((a == 'y') && (i == 0))
        {
            a = 'Y';
            fl.put(a);
        }
        //cout << a << endl;
        i--;
    }
    print_file(fl);
    /*for (i = 1; i <= n; i++)
    {
        if ((c[i] == 'a') && ((c[i - 1] == ' ') || (c[i - 1] == '\'')))
            c[i] = 'A';
        if ((c[i] == 'e') && ((c[i - 1] == ' ') || (c[i - 1] == '\'')))
            c[i] = 'E';
        if ((c[i] == 'i') && ((c[i - 1] == ' ') || (c[i - 1] == '\'')))
            c[i] = 'I';
        if ((c[i] == 'o') && ((c[i - 1] == ' ') || (c[i - 1] == '\'')))
            c[i] = 'O';
        if ((c[i] == 'u') && ((c[i - 1] == ' ') || (c[i - 1] == '\'')))
            c[i] = 'U';
        if ((c[i] == 'y') && ((c[i - 1] == ' ') || (c[i - 1] == '\'')))
            c[i] = 'Y';
    }*/
    

    //cout << c << '\n';
}