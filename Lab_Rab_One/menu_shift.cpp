#include "Include.h"

int** menu_shift(int& rows, int& cols, int** arr, int** new_arr, int old_rows, int old_cols)
{
	char switch_on;
	while (true)
	{
		cout << "1 - save changes and go out\n2 - exit the menu without changes\n";

		cin >> switch_on;
		switch (switch_on)
		{
		case '1':
			/*for (int i = 0; i < rows; i++)
			{
				for (int j = 0; j < cols; j++)
				{
					arr[i][j] = new_arr[i][j];
				}
			}*/
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