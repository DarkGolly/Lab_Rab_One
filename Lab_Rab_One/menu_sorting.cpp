#include "Include.h"

template <typename T>
void menu_sorting_s_3(T * arr, T* new_arr, int length)
{
	char switch_on;
	while (true)
	{
		cout << "1 - save changes and go out\n2 - exit the menu without changes\n";

		cin >> switch_on;
		switch (switch_on)
		{
		case '1':
			for (int i = 0; i < length; ++i)
			{
				arr[i] = new_arr[i];
			}
			return;
		case '2':
			return;
		default:
			cout << "Mistake! Please enter again!" << endl;
			break;
		}
	}
}

template void menu_sorting_s_3<int>(int*, int*, int);
template void menu_sorting_s_3<float>(float*, float*, int);
template void menu_sorting_s_3<double>(double*, double*, int);