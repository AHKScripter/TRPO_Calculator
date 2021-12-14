#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <clocale>
#include <stdlib.h>
#include "TRPO_Functions.h"

using namespace std;

int main()
{
    double value_A, value_B;
    char choice = 'y';
    int p = 1, select = 0;
    while (p != 2)
    {
        refresh_menu:
        system("cls");
        cout << "\tCalculator\n";
        cout << "-----------Menu-----------\n";
        cout << "|1 - Calculate expression| \n|2 - Exit                |\n";
        cout << "", "|\n";
        cout << "--------------------------\n";
        cout << "Your Choice: ";
        cin >> p;
        if (p != 1) break;
        refresh_select:
        system("cls");

        cout << "----Calculate expression---\n";
        cout << "|[1] Add            | A+B |";
        cout << "\n|[2] Subtract       | A-B |";
        cout << "\n|[3] Multiply       | A*B |";
        cout << "\n|[4] Divine         | A/B |";
        cout << "\n|[5] Exponentiation | A^B |";
        cout << "\n|[6] Back to menu         |\n";
        cout << "---------------------------\n";
        cout << " Your Choice: ";
        cin >> select;
        while (choice == 'y')
        {
            cout << "\n";
            switch (select)
            {
            case 1:
                cout << " Enter the first number: ";
                cin >> value_A;
                cout << " Enter the next number: ";
                cin >> value_B;
                printf(" Result = %lf\n", sum(value_A, value_B));
                break;
            case 2:
                cout << " Enter the first number: ";
                cin >> value_A;
                cout << " Enter the next number: ";
                cin >> value_B;
                printf(" Result = %lf\n", mynus(value_A, value_B));
                break;
            case 3:
                cout << " Enter the first number: ";
                cin >> value_A;
                cout << " Enter the next number: ";
                cin >> value_B;
                printf(" Result = %lf\n", multiply(value_A, value_B));
                break;
            case 4:
                cout << " Enter the first number: ";
                cin >> value_A;
                cout << " Enter the next number: ";
                cin >> value_B;
                printf(" Result = %lf\n", share(value_A, value_B));
                break;
            case 5:
                cout << " Enter the first number: ";
                cin >> value_A;
                cout << " Enter the next number: ";
                cin >> value_B;
                printf(" Result = %lf\n", elevate(value_A, value_B));
                break;
            case 6:
                goto refresh_menu;
            default:
                cout << " Invalid value...Please try again\n" << endl;
                system("pause");
                goto refresh_select;
            }
            cout << " Do you want to continue? y/n" << endl;
            cout << "\n Your Choice: ";
            cin >> choice;
            if (choice == 'n')
            {
                choice = 'y';
                goto refresh_select;
            }           
        }
    }
}
