#pragma once

int get_type();
template <typename T>
extern T* data_enter(int& length);
template <typename T>
extern T** data_enter(int& rows, int& cols);
int enter_length(int& length);

template <typename T>
extern void display_array(int rangeOfArray, T* Array);
template <typename T>
extern void display_array(int rows, int columns, T** Matrix);

//lab ¹ 3
template <typename T>
extern void print_quantity(T* arr, int len);
template <typename T>
extern bool cin_distance(T& A, T& B, T* Arr, int lenght);
template <typename T>
extern T* logic_sum(T* arr, int& len);
template <typename T>
extern void menu_s_3(T* Array, int& length);
template <typename T>
extern bool logic_sorting(int len, T* arr);
template <typename T>
extern bool s_3_logic();
template <typename T>
extern void menu_sorting_s_3(T* arr, T* new_arr, int length);
template <typename T>
extern T* sorting_s_3(const T* arr, const int& size);
template <typename T>
extern void qsort_array(T* numbers, int size);
template <typename T>
extern T* equality_test(int& len, T* arr, T& max, int& max_id, bool& flag);
template <typename T>
extern T* wrong_len(T* arr, int& len, bool& flag);
template <typename T>
extern T search_sum(T* arr, int len, int max_id, T sum);
template <typename T>
extern int amount_of_elements(T* arr, int len, T A, T B);

//lab ¹ 4
template <typename T>
extern T** shift_down(int& rows, int& cols, T** arr);
template <typename T>
extern T** shift_right(int& rows, int& cols, T** arr);
bool findNonZeroStep(const int& quantity);
bool widthEqualsOffset(int shift, int width);
template <typename T>
extern bool s_4();
template <typename T>
extern void menu_s_4(int& rows, int& cols, T** arr);
template <typename T>
extern bool array_check(int rows, int cols, T** arr);
template <typename T>
extern T** menu_error_s_4(T** arr, int& rows, int& cols);
template <typename T>
extern T** menu_shift(int& rows, int& cols, T** arr, T** new_arr, int old_rows, int old_cols);
template <typename T>
extern T** logic_shift(int& rows, int& cols, T** arr, char flag);
template <typename T>
extern T** copy_arr(int& rows, int& cols, T** arr);

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
template <typename T>
extern T check(T a);
double check_doub(char* isDigit);
template <typename T>
extern void destroy(T* arr, int len);
template <typename T>
extern void destroy(T** arr, int rows, int cols);
void text_menu();
void text_menu_s_3();
void text_s3_1();
void text_menu_s_4();
void text_menu_s_5();