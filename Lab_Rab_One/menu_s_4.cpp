#include "Include.h"

int** menu_s_4(int &rows, int &cols, int** arr)//��������� - ��� ������, ���� ������ �������� ������, � ��� �������� �� ���� ������ �����
{
	char switch_on = ' ';
	while (true)
	{
		display_array(rows, cols, arr);//������� ������

		text_menu_s_4();

		cin >> switch_on;
		if (switch_on == '0')
		{
			system("cls");
			return arr;
		}
		switch (switch_on)
		{
		case '1':
			system("cls");
			arr = logic_shift(rows, cols, arr, switch_on);//����� ����
			system("pause");
			system("cls");
			break;
		case '2':
			system("cls");
			arr = logic_shift(rows, cols, arr, switch_on);//����� ������
			system("pause");
			system("cls");
			break;
		case '3':
			system("cls");
			destroy(arr, rows, cols);//�������� ������� �
			arr = data_enter(rows, cols);//�������� ������
			system("cls");
			break;
		default:
			cout << "Attention!!! \nchoose number again:";
			system("pause");
			system("cls");
			break;
		}
	}
}