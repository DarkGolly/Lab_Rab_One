#include "Include.h"

template <typename T>
T** logic_shift(int& rows, int& cols, T** arr, char flag)//flag может быть только '1' или только '2'!
{
	T** new_arr = copy_arr(rows, cols, arr);
	int old_rows = rows;
	int old_cols = cols;

	display_array(rows, cols, new_arr);//выводим массив

	if (flag == '1')
	{
		new_arr = shift_down(rows, cols, new_arr);//сдвиг вниз
	}
	else
	{
		new_arr = shift_right(rows, cols, new_arr);//сдвиг вправо
	}

	display_array(rows, cols, new_arr);//выводим массив

	arr = menu_shift(rows, cols, arr, new_arr, old_rows, old_cols);//выбираем какой массив сделать основным

	return arr;
}

template int** logic_shift<int>(int&, int&, int**, char);
template float** logic_shift<float>(int&, int&, float**, char);
template double** logic_shift<double>(int&, int&, double**, char);