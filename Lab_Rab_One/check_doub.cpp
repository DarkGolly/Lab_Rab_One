#include "Include.h"
#include <cctype>
//�������� �� ������������ �����
double check_doub(char* isDigit)
{
	double digit = 0.0;
	bool flag = false;

	while (true)
	{
		for (int i = 0; isDigit[i] != '\0'; i++)
		{//���������� �� ������� � �������, ����� �� ���� ����, ����� � ����� �����
			flag = check_dig(isDigit[i]);//��������� �� �����
			if (!flag && isDigit[i] != '.' && isDigit[i] != '-')//isDigit ������� ������ ������� ������
			{//���� ��� ���� � ���� ����������� ��������, �� �� �� � ������� �� �����
				cout << "enter again\n-->";
				cin >> isDigit;
				i = -1;//����� -1 ������ ��� ����� ������� �������� ����� ���������� �������
			}
		}
		break;
	}
	digit = atof(isDigit);//������ �� �������� �����
	return digit;
}