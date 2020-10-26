#include "Include.h"

void menu_s_4(int &rows, int &cols, int** arr)//амперсанд - это ссылка, саму ссылку изменить нельза, а вот значения по этой ссылки можно
{
	char switch_on = ' ';
	while (true)
	{
		display_array(rows, cols, arr);//выводим массив

		cout << "Choose direction\n\nEnter 1 - to move down\nEnter 2 - to move right\n";
		cout << "Enter 3 - to enter new data\n";
		cout << "\n\n\nEnter '0' and press \"Enter\" to return to the previous menu.\n\n";
		cout << "Choose further action:";

		cin >> switch_on;
		if (switch_on == '0')
		{
			system("cls");
			break;
		}
		switch (switch_on)
		{
		case '1':
			system("cls");
			shift_down(rows, cols, arr);//сдвиг вниз
			system("pause");
			system("cls");
			break;
		case '2':
			system("cls");
			shift_right(rows, cols, arr);//сдвиг вправо
			system("pause");
			system("cls");
			break;
		case '3':
			system("cls");
			destroy(arr, rows, cols);//удаление массива и
			arr = data_enter(rows, cols);//создание нового
			system("cls");
			break;
		default:
			cout << "Attention!!! \nchoose number again:";
			break;
		}
	}
}