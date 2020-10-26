#pragma once

double* data_enter(int& length);
int** data_enter(int& rows, int& cols);

void display_array(int rangeOfArray, double* Array);
void display_array(int rows, int columns, int** Matrix);

//lab ¹ 3
void quantity(double m[], int n, double A, double B);
void sum(double* arr, int len);
void menu_s_3(double* Array, int& length);
void s_3();
void sorting_s_3(int len, double* arr);
void equality_test(int len, double* arr, double& max, int& max_id);

//lab ¹ 4
void shift_down(int& rows, int& cols, int** arr);
void shift_right(int& rows, int& cols, int** arr);
void s_4();
void menu_s_4(int& rows, int& cols, int** arr);
bool array_check(int rows, int cols, int** arr);

//lab ¹ 5
void zam(std::fstream &fl);
void s_5();
void menu_s5(std::fstream &fl);
void print_file(std::fstream &fl);
void zamena(long long int position, char a);

bool check_dig(char a);
void menu();
int check(int a);
void cin_distance(double& A, double& B, double* Arr, int lenght);
double check_doub(char* isDigit);
void destroy(double* arr, int len);
void destroy(int** arr, int rows, int cols);