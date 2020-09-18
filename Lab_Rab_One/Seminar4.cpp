#include "Seminar.h"



string change(string str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u') || (str[i] == 'y')) && ((str[i - 1] == ' ') || (str[i - 1] == '\'') || (str[i - 1] == '\"')))
            str[i] = toupper(str[i]);
    }
    return str;
}

void Seminar4()
{
    string str;
    getline(cin, str);
    str = change(str);
    cout << str;

}