#include "Seminar.h"


using namespace std;



int main()
{
    cout << "Hello dear user!\n";
    cout << "This program has 3 seminars. This is:\n";
    cout << "Seminar number 3.\n";
    cout << "Seminar number 4.\n";
    cout << "Seminar number 5.\n";
    cout << "\n\n\n\nEnter '9' and press \"Enter\" to exit the program.\n\n";
    setlocale(LC_ALL, "ru");
    //�������� ������ � �����
    char a[1];
    cin >> a;

    //���� ����� ���������� ���� ���������� ����������
    //����� �����, ��� ���������� ����
    bool IsBreak = false;

    //���������, �������� �� ������ ������
    for (int i = 0; a[i] != '\0'; i++) //��� ������� ����� ������������ i<strlen(str) � ������� �����
        if (a[i] < 48 || a[i]>57) 
        { 
            cout << "�� �����"; IsBreak = true; break; 
        }
    cout << "Choose number seminar:";
    for (;;)
    {
        cin >> a;
        if (*a == '9')
        {
            cout << "Good bay!";
            break;
        }
        else
        {
            switch (*a)
            {
            case '3':
                cout << "3 number seminar:";
                Seminar3();
                break;
            case '4':
                cout << "4 number seminar:";
                Seminar4();
                break;
            case '5':
                cout << "5 number seminar:";
                Seminar5();
                break;
            case '0':
                cout << "������ ������� �� ���������!������� ������";
                *a = '0';
                break;
            default:
                cout << "Attention!!! error\nchoose number seminar again:";
                break;
            }
        }
    }   
    return 0;
}