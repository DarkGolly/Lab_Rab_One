#include "Include.h"

double* data_enter(int &length)
{
	double* Array = new double[length];//������������ ������
	char arr[16] = "";
	cout << "Fill the array: " << endl;
	for (int i = 0; i < length; i++)
	{
		cout << "\telement [ " << i << " ] --->:";
		cin >> arr;
		Array[i] = check_doub (arr);//�������� ������� ������� ������������ �������� ��������
	}
	return Array;//���������� ��������� �� ������
}

int** data_enter(int& rows, int& cols)
{
	//������������� ���������� ������������� �������
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}

	int temp_dig = 0;
	cout << "Enter a data in matrix: " << endl;
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cout << "\n\telement [ " << i << " ] " << " [ " << j << " ] --->:";
			arr[i][j] = check(temp_dig);//�������� ������� ������� ������������ �������� ��������
		}
	}
	return arr;
}