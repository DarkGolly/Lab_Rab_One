#pragma once
#include <iostream>
#include <string>

using namespace std;

struct NOTE
{
    string FIO;
    string phone;
    int birth[3];
};

void prov(NOTE* mass, int n);

void sort(NOTE* mass);

void Seminar5();