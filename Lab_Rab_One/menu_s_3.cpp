#include "Include.h"

template <typename T>
void menu_s_3(T* arr, int & len)
{
	char switch_on;
	
	while (true)
	{
		display_array(len, arr);
		text_menu_s_3();

		cin >> switch_on;
		if (switch_on == '0')
		{
			destroy(arr, len);//������� ������������ ������
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
			arr = logic_sum(arr, len);//����� ��������� ������� ����� ������������� ��������
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
			system("pause");
			system("cls");
			break;
		}
	}
}

template void menu_s_3<int>(int*, int&);
template void menu_s_3<float>(float*, int&);
template void menu_s_3<double>(double*, int&);