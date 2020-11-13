#pragma once

double* data_enter(int& length);
int** data_enter(int& rows, int& cols);

void display_array(int rangeOfArray, double* Array);
void display_array(int rows, int columns, int** Matrix);

//lab ¹ 3
void print_quantity(double* arr, int len);
bool sum(double* arr, int len);
void menu_s_3(double* Array, int& length);
bool logic_sorting(int len, double* arr);
bool s_3_logic();
void menu_sorting_s_3(double* arr, double* new_arr);
double* sorting_s_3(int len, double* arr);
bool equality_test(int len, double* arr, double max, int& max_id);
bool wrong_id(double* arr, int& len, double& max, int& max_id);
double search_sum(double* arr, int len, int max_id, double sum);
int amount_of_elements(double* arr, int len, double A, double B);

//lab ¹ 4
bool shift_down(int& rows, int& cols, int** arr);
bool shift_right(int& rows, int& cols, int** arr);
bool s_4();
void menu_s_4(int& rows, int& cols, int** arr);
bool array_check(int rows, int cols, int** arr);
void menu_error_s_4(int** arr, int& rows, int& cols);

//lab ¹ 5
bool search_letter(std::fstream& fl);
bool s_5();
void menu_s5(std::fstream &fl);
bool replacement(long long int position, char a);
void print_file(std::fstream& fl);

bool check_dig(char a);
void menu();
int check(int a);
bool cin_distance(double& A, double& B, double* Arr, int lenght);
double check_doub(char* isDigit);
void destroy(double* arr, int len);
void destroy(int** arr, int rows, int cols);
void text_menu();
void text_menu_s_3();
void text_menu_s_4();