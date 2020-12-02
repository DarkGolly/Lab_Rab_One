#include "Include.h"

void logic_shift(int& rows, int& cols, int** arr, char flag)//flag ����� ���� ������ '1' ��� ������ '2'!
{
	int** new_arr = copy_arr(rows, cols, arr);

	display_array(rows, cols, arr);//������� ������

	if (flag == '1')
	{
		new_arr = shift_down(rows, cols, new_arr);//����� ����
	}
	else
	{
		new_arr = shift_right(rows, cols, new_arr);//����� ������
	}

	display_array(rows, cols, new_arr);//������� ������

	menu_shift(rows, cols, arr, new_arr);//�������� ����� ������ ������� ��������

	delete new_arr;
}