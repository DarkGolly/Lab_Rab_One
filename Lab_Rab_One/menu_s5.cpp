#include "Include.h"

void menu_s5(fstream &fl)
{
	int switch_on = 0;
	
	while (true)
	{
		print_file(fl);
		cout << "\n\n";
		cout << "enter 1 - recording in file\nenter 0 - exit this menu\n\n\n";

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
			search_letter(fl);
			system("pause");
			system("cls");
			break;
		default:
			system("cls");
			cout << "ATTENTION!!! \nchoose number seminar again:";
			break;
		}
	}
	
}