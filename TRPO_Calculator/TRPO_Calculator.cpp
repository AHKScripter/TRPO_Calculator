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
    double value_A, value_B, value_C;
    char choice = 'y';
    int p = 1, select = 0;
    while (p != 3)
    {

    refresh_menu:
        system("cls");
        cout << "\tCalculator\n";
        cout << "-----------Menu-------------\n";
        cout << "|[1] - Standart Calculator |\n";
        cout << "|[2] - Advanced Calculator | \n";
        cout << "|[3] - Exit                | \n";
        cout << "----------------------------\n";
        cout << " Select a menu item: ";
        cin >> p;
        if (p == 1)
        {
        refresh_select:
            system("cls");

            cout << "----Standart-Calculator----\n";
            cout << "|[1] Add            | A+B |";
            cout << "\n|[2] Subtract       | A-B |";
            cout << "\n|[3] Multiply       | A*B |";
            cout << "\n|[4] Divine         | A/B |";
            cout << "\n|[5] Back to menu         |\n";
            cout << "---------------------------\n";
            cout << " Select a menu item: ";
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
        else if (p == 2)
        {
        refresh_select_2:
            system("cls");

            cout << "----Advanced-Calculator----\n";
            cout << "|[1] Circle Radis   |L*Pi |\n";
            cout << "|[2] Exponentiation | A^B |\n";
            cout << "|[3] Factorial      | A!  |\n";
            cout << "|[4] Stirling       | 2nd |\n";  
            cout << "|[5] Triangle       |  S  |\n";
            cout << "|[6] Back to menu         |\n";

            cout << "---------------------------\n";
            cout << " Select a menu item: ";
            cin >> select;
            while (choice == 'y')
            {
                cout << "\n";
                switch (select)
                {
                case 1:
                    cout << " Enter the length of the circle: ";
                    cin >> value_A;
                    printf(" Result = %lf\n", LengthOfCircle(value_A));
                    break; 
                case 2:
                    cout << " Enter the first number: ";
                    cin >> value_A;
                    cout << " Enter the next number: ";
                    cin >> value_B;
                    printf(" Result = %lf\n", elevate(value_A, value_B));
                    break;
                case 3:
                    cout << " Enter the number: ";
                    cin >> value_A;
                    printf(" Result = %lf\n", factorial(value_A));
                    break;
                case 4:
                    cout << " Enter the first number: ";
                    cin >> value_A;
                    cout << " Enter the next number: ";
                    cin >> value_B;
                    printf(" Result = %lf\n", Stirling(value_A, value_B));
                    break;
                case 5:
                    cout << " A: ";
                    cin >> value_A;
                    cout << " B: ";
                    cin >> value_B;
                    cout << " C: ";
                    cin >> value_C;
                    printf(" Result = %lf\n", Triangle(value_A, value_B, value_C));
                    break;
                case 6:
                    goto refresh_menu;
                default:
                    cout << " Invalid value...Please try again\n" << endl;
                    system("pause");
                    goto refresh_select_2;
                }
                cout << " Do you want to continue? y/n" << endl;
                cout << "\n Your Choice: ";
                cin >> choice;
                if (choice == 'n')
                {
                    choice = 'y';
                    goto refresh_select_2;
                }
            }
        }


    }
        
}
