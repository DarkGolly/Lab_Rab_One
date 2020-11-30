#include "Include.h"

bool logic_sorting(int len, double* arr)
{
	double* new_arr;

	cout << "it was\n\n";
	display_array(len, arr);

	cout << "\n\n\nit becam\n\n";
	new_arr = sorting_s_3(arr, len);
	display_array(len, new_arr);

	menu_sorting_s_3(arr, new_arr);

	delete new_arr;
	return true;
}