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


