#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <clocale>
#include <stdlib.h>
#include <string.h>


double sum(double value_A, double value_B) {
    double r;
    r = value_A + value_B;
    return r;
}

double mynus(double value_A, double value_B) {
    double r;
    r = value_A - value_B;
    return r;
}

double multiply(double value_A, double value_B) {
    double r;
    r = value_A * value_B;
    return r;
}
double share(double value_A, double value_B) {
    double r;
    r = value_A / value_B;
    return r;
}

double elevate(double value_A, double value_B) {
    double r;
    r = pow(value_A, value_B);
    return r;
}

double LengthOfCircle(double value_A){
    double Pi = 3.14159265;
    double L = 2.*Pi*value_A;
    return L;
}

double factorial(double value_A) {
    return value_A == 0 ? 1 : value_A * factorial(value_A - 1);
}

double Stirling(int value_A, int value_B)
{
    if (value_A == value_B) return 1;
    else
        if (value_B == 0) return 0;
        else
            return Stirling(value_A - 1, value_B - 1) + value_B * Stirling(value_A - 1, value_B);
}

double Triangle(double value_A, double value_B, double value_C) {
    double p = (value_A + value_B + value_C) / 2;
    double s = pow(double(p * (p - value_A) * (p - value_B) * (p - value_C)), 0.5);
    return s;

}

