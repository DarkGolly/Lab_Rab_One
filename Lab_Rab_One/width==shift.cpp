#include "Include.h"

bool widthEqualsOffset(int shift, int width)//ширина равна сдвигу
{
	if (shift == width)
	{
		cout << "This operation is meaningless because the result will not change.\n";
		return true;
	}
	return false;
}