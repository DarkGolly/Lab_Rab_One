#include "Include.h"

void shift_right(int &rows, int &cols, int** arr)
{
    if (array_check(rows, cols, arr))
    {
        cout << "Select this seminar again and enter a new array\n";
    }
    else
    {
        cout << "To move right\n\n";
        cout << "Enter the number of offsets to the right\n--->:";
        int quantity = 0;
        quantity = check(quantity);
        display_array(rows, cols, arr);
        for (int ch = 0; ch < quantity; ch++)
        {
            for (int j = cols - 1; j > 0; j--)
            {
                for (int i = 0; i < rows; i++)
                {
                    swap(arr[i][j], arr[i][j - 1]);
                }
            }
        }
        display_array(rows, cols, arr);
    }
}