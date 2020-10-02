#include "Include.h"

double check_doub(char* isDigit)
{
	double digit = 0;

	for (int i = 0; isDigit[i] != '\0'; i++)
	{
		if (!isdigit(isDigit[i]))
		{
			cout << isDigit[i] << " ne cifra!\n";
		}
		else
		{
			cout << isDigit[i] << " cifra!\n";
		}
	}
	return digit;
}