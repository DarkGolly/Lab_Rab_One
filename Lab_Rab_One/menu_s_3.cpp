#include "Include.h"

void menu_s_3(double* arr, int & len)
{
	char switch_on;
	

	while (true)
	{
		display_array(len, arr);
		text_menu_s_3();

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
			print_quantity(arr, len);//������� ���������� ��������� �� ���������
			system("pause");//�����, ��� ������� ������������
			system("cls");
			break;
		case '2':
			system("cls");
			sum(arr, len);//����� ��������� ������� ����� ������������� ��������
			system("pause");
			system("cls");
			break;
		case '3':
			system("cls");
			logic_sorting(len, arr);
			system("pause");
			system("cls");
			break;
		default:
			cout << "Attention!!! \nchoose number seminar again:";
			break;
		}
	}
}