#include "Include.h"

char get_type() 
{
	cout << "1 - integer.\n2 - float.\n3 - double\n";
	cout << "\nEnter type of Data: ";
	char type;
	cin >> type;
	return type;
}