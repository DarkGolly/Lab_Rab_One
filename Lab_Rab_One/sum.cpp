#include "Include.h"

void sum(double* arr, int len)
{
    double sum = 0;
    int max_id = 0, i;
    double max = 0;
    bool flag = true;
    int lenght = len;

    display_array(len, arr);
    while (flag)
    {
        for (i = 0; i < len; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
                max_id = i;
            }
        }
        if (max_id == len-1 || max_id == len-2 )
        {
            cout << "Error!\nThe maximum cannot be found!\n\nIf you want to re-enter the data, enter \"1\".";
            cout << "Enter 0 to return to the menu.\n";
            lenght = check(lenght);
            switch (lenght)
            {
            case 0:
                flag = false;
                break;
            case 1:
                system("cls");
                data_enter(len, arr);
                max = 0;
                max_id = 0;
                break;

            default:
                cout << "Wrong action selected!\n Please re-enter!\n";
                break;
            }
        }
        else
        {
            for (i = max_id + 1; i < len; i++)
            {
                sum += arr[i];
            }
            cout << "The sum of elements located after the maximum element is " << sum << "\n";
            flag = false;
        }    
    }
}