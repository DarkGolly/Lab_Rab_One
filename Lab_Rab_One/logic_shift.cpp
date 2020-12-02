#include "Include.h"

void logic_shift(int& rows, int& cols, int** arr, char flag)//flag может быть только '1' или только '2'!
{
	int** new_arr = copy_arr(rows, cols, arr);

	display_array(rows, cols, arr);//выводим массив

	if (flag == '1')
	{
		new_arr = shift_down(rows, cols, new_arr);//сдвиг вниз
	}
	else
	{
		new_arr = shift_right(rows, cols, new_arr);//сдвиг вправо
	}

	display_array(rows, cols, new_arr);//выводим массив

	menu_shift(rows, cols, arr, new_arr);//выбираем какой массив сделать основным

	delete new_arr;
}