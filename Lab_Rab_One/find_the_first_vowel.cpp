#include "Include.h"

 bool find_the_first_vowel(fstream &fl)//поиск первой гласной буквы
{
     if (checkingFile(fl) == false)
     {
         return false;
     }
    print_file(fl);

    bool flag = 0;
    char a;

    while (fl.get(a))//считываем посимвольно
    {
        if (a == ' ' || a == '\n')
        {
            flag = 1;
            continue;
        }
        if (fl.tellg() == 1)//смотрим самую первую букву, ведь перед ней нету пробела
        {
            flag = 1;
        }
        if ((a == 'a') && flag)
        {
            a = 'A';
            replacement(fl.tellp(), a);//вызываем функцию замены, передавая туда текущее положение указателя в потоке и саму букву
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