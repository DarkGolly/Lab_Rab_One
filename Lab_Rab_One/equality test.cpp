#include "Include.h"

void equality_test (int len, double* arr, double& max, int& max_id)
{
    bool check_dig = false;
    int temp_id = 0, temp_dig = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == max)
        {
            temp_dig++;
            if (temp_dig >= 2)
            {
                check_dig = true;
            }
        }
    }
    if (check_dig)
    {
        cout << "Select the ID of the maximum element to find the sum of the following elements\n";
        temp_id = check(temp_id);
        if (arr[temp_id] == max)
        {
            max_id = temp_id;
        }
    }
}