#include "Include.h"


template <typename T>
T* data_enter(int &length)
{
	T* Array = new T[length];//динамический массив
	char arr[16] = "";
	cout << "Fill the array: " << endl;
	for (int i = 0; i < length; i++)
	{
		cout << "\telement [ " << i << " ] --->:";
		cin >> arr;
		Array[i] = check_doub(arr);//вызываем функцию которая обрабатывает введённое значение
	}
	return Array;//возвращаем указатель на массив
}

template int* data_enter<int>(int&);
template float* data_enter<float>(int&);
template double* data_enter<double>(int&);

template <typename T>
T** data_enter(int& rows, int& cols)
{
	//инициализация двумерного динамического массива
	T** arr = new T* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new T[cols];
	}

	T temp_dig = 0.0;
	cout << "Enter a data in matrix: " << endl;
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cout << "\n\telement [ " << i << " ] " << " [ " << j << " ] --->:";
			arr[i][j] = check(temp_dig);//вызываем функцию которая обрабатывает введённое значение
		}
	}
	return arr;
}

template int** data_enter<int>(int&, int&);
template float** data_enter<float>(int&, int&);
template double** data_enter<double>(int&, int&);