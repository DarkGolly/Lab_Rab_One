#include "Include.h"

void menu_shift(int rows, int cols, int** arr, int** new_arr)
{
	char switch_on;
	while (true)
	{
		cout << "1 - save changes and go out\n2 - exit the menu without changes\n";

		cin >> switch_on;
		switch (switch_on)
		{
		case '1':
			for (int i = 0; i < rows; i++)
			{
				for (int j = 0; j < cols; j++)
				{
					arr[i][j] = new_arr[i][j];
				}
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