#pragma once

double* data_enter(int& length);
int** data_enter(int& rows, int& cols);
int enter_length(int& length);

void display_array(int rangeOfArray, double* Array);
void display_array(int rows, int columns, int** Matrix);

//lab ¹ 3
void print_quantity(double* arr, int len);
bool cin_distance(double& A, double& B, double* Arr, int lenght);
bool logic_sum(double* arr, int len);
void menu_s_3(double* Array, int& length);
bool logic_sorting(int len, double* arr);
bool s_3_logic();
void menu_sorting_s_3(double* arr, double* new_arr, int length);
double* sorting_s_3(const double* arr, const int& size);
void qsort_array(double* numbers, int size);
bool equality_test(int len, double* arr, double max, int& max_id);
bool wrong_id(double* arr, int& len, double& max, int& max_id);
double search_sum(double* arr, int len, int max_id, double sum);
int amount_of_elements(double* arr, int len, double A, double B);

//lab ¹ 4
int** shift_down(int& rows, int& cols, int** arr);
int** shift_right(int& rows, int& cols, int** arr);
bool findNonZeroStep(const int& quantity);
bool widthEqualsOffset(int shift, int width);
bool s_4();
void menu_s_4(int& rows, int& cols, int** arr);
bool array_check(int rows, int cols, int** arr);
void menu_error_s_4(int** arr, int& rows, int& cols);
void menu_shift(int rows, int cols, int** arr, int** new_arr);
void logic_shift(int& rows, int& cols, int** arr, char flag);
int** copy_arr(int& rows, int& cols, int** arr);

//lab ¹ 5
bool find_the_first_vowel(std::fstream& fl);
bool checkingFile(std::fstream& fl);
bool isVowel(char c);
bool s_5();
void menu_s5(std::fstream &fl);
bool replacement(long long int position, char a);
void print_file(std::fstream& fl);

bool check_dig(char a);
void menu();
int check(int a);
double check_doub(char* isDigit);
void destroy(double* arr, int len);
void destroy(int** arr, int rows, int cols);
void text_menu();
void text_menu_s_3();
void text_menu_s_4();