#include "Include.h"

bool checkingFile(fstream& fl)
{
	char c, a; 
	fl.get(c);
	if (c == -52)//это значение когда файл пустой или указывает на конец
	{
		cout << "This file is empty.\n";
		return false;
	}
	else
	{
		int numberVowels = 0; //количество гласных
		if (isVowel(c)==true)
		{
			numberVowels++;
		}
		a = c;
		while (fl.get(c))//берем по одному символу и выводим
		{
			if (isVowel(c) == true && a == ' ')
			{
				numberVowels++;
			}
		}
		if (numberVowels == 0)
		{
			cout << "There are no english words in this file that start with a lowercase vowel. This operation is useless.\n";
			return false;
		}
	}
	fl.clear();
	fl.seekg(0);
	return true;
}