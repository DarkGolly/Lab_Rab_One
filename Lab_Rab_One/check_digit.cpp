#include "Include.h"

bool check_dig(char a)
{
	for (int i = 48; i < 59; i++)//����������� �� ��������� ������� ����
	{
		if (a == i)
		{
			return true;
		}
	}
	return false;
}