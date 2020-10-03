#include "Include.h"

double check_doub(char* isDigit)
{
	double digit = 0;
	bool flag = true;

	while (flag)
	{
		for (int i = 0; isDigit[i] != '\0'; i++)
		{
			if (!isdigit(isDigit[i]) && isDigit[i] != '.')
			{
				cout << "vvedite snachala\n-->";
				cin >> isDigit;
				i = -1;
			}
		}
		break;
	}
	digit = atof(isDigit);
	return digit;
}