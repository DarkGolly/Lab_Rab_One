#include "Include.h"
//�������� �� ������������ ����� ����� �������
int enter_length(int &length)
{
	const int maxlengthOfArray = 50;

	while (true)
	{
		cout << "Enter the length of the array:\n";
		length = check(length);//������ ����� �������
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