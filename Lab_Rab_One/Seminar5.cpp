#include "Seminar.h"




//Поиск людей с определенным месяцем рождения
void prov(NOTE* mass, int n)
{
    bool Pr = true;
    for (int i = 0; i < 8; i++)
    {
        if (n == mass[i].birth[1])
        {
            cout << mass[i].FIO << " " << mass[i].phone << " " << mass[i].birth[0] << "." << mass[i].birth[1] << "." << mass[i].birth[2] << endl;
            Pr = false;
        }
    }
    if (Pr)
        cout << "No";
}



//Сортируем записи по алфавиту
void sort(NOTE* mass)
{
    NOTE a;
    for (int j = 0; j < 8; j++)
    {
        for (int i = 0; i < 8; i++)
        {
            if (mass[j].FIO < mass[i].FIO)
            {
                a = mass[j];
                mass[j] = mass[i];
                mass[i] = a;
            }
        }
    }
    for (int i = 0; i < 8; i++)
        cout << mass[i].FIO << " " << mass[i].phone << " " << mass[i].birth[0] << " " << mass[i].birth[1] << " " << mass[i].birth[2] << endl;
}


void Seminar5()
{
    NOTE mass[8];
    for (int i = 0; i < 8; i++)
    {
        cin >> mass[i].FIO >> mass[i].phone >> mass[i].birth[0] >> mass[i].birth[1] >> mass[i].birth[2];
    }
    int n;
    cin >> n;
    sort(mass);
    prov(mass, n);
}