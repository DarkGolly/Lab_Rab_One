#include "Include.h"

template <typename T>
bool logic_sorting(int len, T* arr)
{
	T* new_arr;

	cout << "it was\n\n";
	display_array(len, arr);

	cout << "\n\n\nThis is the result of modulo quicksort.\n\n";
	new_arr = sorting_s_3(arr, len);
	display_array(len, new_arr);

	menu_sorting_s_3(arr, new_arr, len);

	delete new_arr;
	return true;
}

template bool logic_sorting<int>(int, int*);
template bool logic_sorting<float>(int, float*);
template bool logic_sorting<double>(int, double*);