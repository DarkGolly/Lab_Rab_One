#include "Include.h"

void menu_sorting_s_3(double * arr, double* new_arr)
{
	char switch_on;
	while (true)
	{
		cout << "1 - save changes and go out\n2 - exit the menu without changes\n";

		cin >> switch_on;
		switch (switch_on)
		{
		case '1':
			arr = new_arr;
			return;
		case '2':
			return;
		default:
			cout << "Mistake! Please enter again!" << endl;
			break;
		}
	}
}