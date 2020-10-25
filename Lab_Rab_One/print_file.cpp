#include "Include.h"

void print_file(fstream &fl)
{
	fl.clear();
	//fl.seekg(0);
	char c;
	while (fl.get(c))
	{
		cout << c;
	}
	cout << endl;
	fl.clear();
	//fl.seekg(0);
	//cout << fl.cur << endl;
}