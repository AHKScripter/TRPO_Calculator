#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <clocale>
#include <stdlib.h>
using namespace std;

int main()
{
    double a, b;
    double c = 0;
    char d;
    int p = 1;
    while (p != 2)
    {
        printf("1 - Calculate expression \n2 - Exit \n");
        scanf("%d", &p);
        if (p != 1) break;
        system("cls");
        printf("Enter an expression and click button 'Enter' \n Example \n A+B \n A-B \n A*B \n A/B \n A^B \n");
        scanf("%lf%c%lf", &a, &d, &b);
        while (getchar() != '\n');
        switch (d)
        {
        case '+': {sum(a, b);      printf("Result = %lf\n", sum(a, b)); }; break;
        case '-': {mynus(a, b);    printf("Result = %lf\n", mynus(a, b)); }; break;
        case '*': {multiply(a, b); printf("Result = %lf\n", multiply(a, b)); }; break;
        case '/': {share(a, b);    printf("Result = %lf\n", share(a, b)); }; break;
        case '^': {elevate(a, b);  printf("Result = %lf\n", elevate(a, b)); }; break;
        default:
            printf("Input Error \n");
            continue;
        }
    }
}