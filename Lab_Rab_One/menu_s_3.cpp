#include "Include.h"

void menu_s_3(double* Array, int length)
{
	char arr[] = "";
	int switch_on = 0;
	double A = 0, B;
	while (true)
	{
		//кол-во элементов массива в диапазоне от А до В
		cout << "1 - The number of array elements located in the range from A to B\n";
		//сумма элементов массива после максимального элемента
		cout << "2 - Sum of array elements located after the maximum element\n";

		cout << "\n\n\n\nEnter '0' and press \"Enter\" to return to the previous menu.\n\n";
		cout << "Choose further action:";

		switch_on = check(switch_on);
		if (switch_on == 0)
		{
			system("cls");
			break;
		}
		switch (switch_on)
		{
		case 1:
			system("cls");
			cout << "Enter start of range 'A':\n";//ввод начала диапазона
			cin >> arr;
			A = check_doub(arr);
			cout << "Enter end of range 'B':\n";//ввод конец диапазона
			cin >> arr;
			B = check_doub(arr);

			cin_distance(A, B);
			//quantity(Array, length, A, B);
			break;
		case 2:
			system("cls");
			cout << "sum of elements after maximum\n";
			sum(Array, length);
			break;
		default:
			cout << "Attention!!! \nchoose number seminar again:";
			break;
		}
	}
}