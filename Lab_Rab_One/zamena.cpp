#include "Include.h"

void zamena(long long int position, char a)
{
    fstream fl;
    fl.open("file.txt", ios::in | ios::out); //2 - чтение, 3 - запись, 1 - путь

    fl.clear();
    fl.seekg(position-1);

    fl.put(a);

    fl.clear();
    fl.close();
}