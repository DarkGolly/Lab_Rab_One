#include "Include.h"

void cin_distance(double &A, double &B, double *Arr, int lenght)
{//���� ����������� �� ��� ���, ���� �� ����� ������� ���������� ��������
	char arr[16] = "";
	while (true)
	{
		display_array(lenght, Arr);//������� ������
		cout << "Enter start of range 'A':\n";//���� ������ ���������
		cin >> arr;
		A = check_doub(arr);//��������� �� ������������ ��������� ��������
		cout << "Enter end of range 'B':\n";//���� ����� ���������
		cin >> arr;
		B = check_doub(arr);
		if (A > B)
		{
			cout << "Invalid range specified!\nThe A value must not be greater than the B value!\n";
			cout << "enter again\n";
			system("pause");
			system("cls");
			continue;
		}
		if (A == B)
		{
			cout << "Invalid range specified!\nThe value of A must not be equal to the value of B!\n";
			cout << "enter again\n";
			system("pause");
			system("cls");
			continue;
		}
		if (A+1 == B)
		{
			cout << "Invalid range specified!\nThere must be at least 2 units between the values A and B!\n";
			cout << "enter again\n";
			system("pause");
			system("cls");
			continue;
		}
		break;
	}
}