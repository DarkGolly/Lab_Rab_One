#include "Include.h"

void s_3(double* Array, int length)
{
	double A, B;
	int switch_on = 0;
	cin >> switch_on;

	while (true)
	{
		switch (switch_on)
		{
		case 1:
			cout << "Enter a range of numbers:\n";//ввод диапазона чисел
			cin >> A >> B;
			quantity(Array, length, A, B);
			break;
		case 2:
			sum(Array, length);
			break;
		default:
			break;
		}
	}
}