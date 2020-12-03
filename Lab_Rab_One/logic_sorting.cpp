#include "Include.h"

bool logic_sorting(int len, double* arr)
{
	double* new_arr;

	cout << "it was\n\n";
	display_array(len, arr);

	cout << "\n\n\nThis is the result of modulo quicksort.\n\n";
	new_arr = sorting_s_3(arr, len);
	display_array(len, new_arr);

	menu_sorting_s_3(arr, new_arr, len);

	delete new_arr;
	return true;
}