#include "Include.h"

bool check_dig(char a)
{
	for (int i = 48; i < 59; i++)//пробегаемся по значениям таблицы аски
	{
		if (a == i)
		{
			return true;
		}
	}
	return false;
}