#include "Include.h"

void menu()
{
    char a;
    
    while (true)
    {  
        text_menu();
        cin >> a;
        if (a == '0')
        {
            cout << "\nGood bay!";
            break;
        }
        switch (a)
        {
        case '3':
            system("cls");//чистит консоль
            switch (get_type())
            {
                case 1: 
                    s_3_logic<int>();//вызываем 3 семинар
                    break;
                case 2:
                    s_3_logic<float>();
                    break;
                case 3:
                    s_3_logic<double>();
                    break;
            }
            break;
        case '4':
            system("cls");
            switch (get_type())
            {
               case 1:
                   s_4<int>();
                   break;
               case 2:
                   s_4<float>();
                   break;
               case 3:
                   s_4<double>();
                   break;
            }
            break;
        case '5':
            system("cls");
            s_5();
            break;
        default:
            system("cls");
            cout << "ATTENTION!!! \nchoose number seminar again:";
            break;
        }     
    }
}