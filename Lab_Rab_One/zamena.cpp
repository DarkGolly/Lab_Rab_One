#include "Include.h"

bool replacement(long long int position, char a)//замена буквы
{
    fstream fl;
    fl.open("file.txt", ios::in | ios::out); //2 - чтение, 3 - запись, 1 - путь

    fl.clear();
    fl.seekg(position-1);//устанавливаем позицию которую передали

    fl.put(a);//ваставляем букву на текущий указатель

    fl.clear();//подчищаем
    fl.close();//закрываем
    return true;
}