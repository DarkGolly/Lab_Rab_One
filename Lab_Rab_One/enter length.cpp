#include "Include.h"
//проверка на корректность ввода длины массива
int enter_length(int &length)
{
	const int maxlengthOfArray = 50;

	while (true)
	{
		cout << "Enter the length of the array:\n";
		length = check(length);//вводим длину массива
		cout << endl;
		if (length <= 0 || length > maxlengthOfArray)
		{
			cout << "\nBulding impossible" << endl;
			continue;
		}
		else
			return length;
	}
}