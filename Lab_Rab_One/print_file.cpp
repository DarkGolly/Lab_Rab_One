#include "Include.h"

void print_file(fstream &fl)//вывод содержимого файла
{
	fl.clear();//очищает флаги ошибок и переводит поток в нормальное состояние
	fl.seekg(0);//ставим указатель на начало файла

	char c;
	while (fl.get(c))//берем по одному символу и выводим
	{
		cout << c;
	}
	cout << endl << endl;
	
	fl.clear();
	fl.seekg(0);

}