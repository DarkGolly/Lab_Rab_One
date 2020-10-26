#include "Include.h"
#include <cctype>
//проверка на вещественное число
double check_doub(char* isDigit)
{
	double digit = 0.0;
	bool flag = false;

	while (true)
	{
		for (int i = 0; isDigit[i] != '\0'; i++)
		{//проходимся по массиву и смотрим, чтобы не было цифр, точек и знака минус
			flag = check_dig(isDigit[i]);//проверяем на число
			if (!flag && isDigit[i] != '.' && isDigit[i] != '-')//isDigit смотрим первые символы строки
			{//если они есть и нету посторонних символов, то всё ок и выходим из цикла
				cout << "enter again\n-->";
				cin >> isDigit;
				i = -1;//ставм -1 потому что после текущей итерации будет прибавлена единица
			}
		}
		break;
	}
	digit = atof(isDigit);//делаем из символов число
	return digit;
}