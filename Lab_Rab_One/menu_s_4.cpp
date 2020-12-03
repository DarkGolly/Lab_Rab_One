#include "Include.h"


template <typename T>
void menu_s_4(int &rows, int &cols, T** arr)//��������� - ��� ������, ���� ������ �������� ������, � ��� �������� �� ���� ������ �����
{
	char switch_on = ' ';
	while (true)
	{
		display_array(rows, cols, arr);//������� ������

		text_menu_s_4();

		cin >> switch_on;
		if (switch_on == '0')
		{
			destroy(arr, rows);//�������� ���������� ������������� �������
			system("cls");
			break;
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
			destroy(arr, rows);//�������� ������� �
			arr = data_enter<T>(rows, cols);//�������� ������
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

template void menu_s_4<int>(int&, int&, int**);
template void menu_s_4<float>(int&, int&, float**);
template void menu_s_4<double>(int&, int&, double**);