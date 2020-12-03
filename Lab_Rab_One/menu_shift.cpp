#include "Include.h"

template <typename T>
T** menu_shift(int& rows, int& cols, T** arr, T** new_arr, int old_rows, int old_cols)
{
	char switch_on;
	while (true)
	{
		cout << "1 - save changes and go out\n2 - exit the menu without changes\n";

		cin >> switch_on;
		switch (switch_on)
		{
		case '1':
			delete arr;
			return new_arr;
		case '2':
			rows = old_rows;
			cols = old_cols;
			delete new_arr;
			return arr;
		default:
			cout << "Mistake! Please enter again!" << endl;
			break;
		}
	}
}

template int** menu_shift<int>(int&, int&, int**, int**, int, int);
template float** menu_shift<float>(int&, int&, float**, float**, int, int);
template double** menu_shift<double>(int&, int&, double**, double**, int, int);