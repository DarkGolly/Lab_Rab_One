#include "Include.h"

void menu_s_4(int &rows, int &cols, int** arr)
{
	int switch_on = 0;
	while (true)
	{
		display_array(rows, cols, arr);
		//
		cout << "Choose direction\n\nEnter 1 - to move down\nEnter 2 - to move right\n";
		//
		cout << "Enter 3 - to enter new data\n";
		cout << "\n\n\nEnter '0' and press \"Enter\" to return to the previous menu.\n\n";
		cout << "Choose further action:";

		switch_on = check(switch_on);
		if (switch_on == 0)
		{
			system("cls");
			break;
		}
		switch (switch_on)
		{
		case 1:
			system("cls");
			shift_down(rows, cols, arr);
			system("pause");
			system("cls");
			break;
		case 2:
			system("cls");
			shift_right(rows, cols, arr);
			system("pause");
			system("cls");
			break;
		case 3:
			system("cls");
			destroy(arr, rows, cols);
			arr = data_enter(rows, cols);
			system("cls");
			break;
		default:
			cout << "Attention!!! \nchoose number again:";
			break;
		}
	}
}