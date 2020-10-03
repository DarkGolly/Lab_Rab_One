#pragma once

void data_enter(int rangeOfArray, double* Array);
void data_enter(int rows, int columns, int** Matrix);

void display_array(int rangeOfArray, double* Array);
void display_array(int rows, int columns, int** Matrix);

//lab ¹ 3
void quantity(double m[], int n, double A, double B);
void sum(double m[], int n, double max = 0, double s = 0);
void menu_s_3(double* Array, int length);
void s_3();

//lab ¹ 4
int** sdown(int n, int m, int** arr, int l, int i, int j);
int** sright(int n, int m, int** arr, int l, int i, int j);
void seminar_4();

//lab ¹ 5
void zam(char c[], int n);
void seminar_5();


void menu();
int check(int a);
double cin_distance(double A, double B);
double check_doub(char* isDigit);