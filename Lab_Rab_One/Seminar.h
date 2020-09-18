#pragma once
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
//lab ¹ 3
int** sdown(int n, int m, int** arr, int l, int i, int j);

int** sright(int n, int m, int** arr, int l, int i, int j);

void Seminar3();
//lab ¹ 4
string change(string str);

void Seminar4();
//lab ¹ 5
struct NOTE
{
    string FIO;
    string phone;
    int birth[3];
};

void prov(NOTE* mass, int n);

void sort(NOTE* mass);

void Seminar5();