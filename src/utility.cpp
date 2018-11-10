// utility.cpp

#include "utility.h"

#include <iostream>
#include <limits>

using namespace std;

int Utility::ArithmeticCalculation(CalcType op, int a, int b) {
    if (op == ADD) {
        return a + b;
    } else if (op == MINUS) {
        return a - b;
    } else if (op == MULTIPLE) {
        return a * b;
    } else {
        if (b == 0) {
            cout << "CANNO Divided by 0" << endl;
            return std::numeric_limits<int>::max();
        }
        return a / b;
    }
}

double Utility::ArithmeticCalculation(CalcType op, double a, double b) {
    if (op == ADD) {
        return a + b;
    } else if (op == MINUS) {
        return a - b;
    } else if (op == MULTIPLE) {
        return a * b;
    } else {
        if (b == 0) {
            cout << "CANNO Divided by 0" << endl;
            return std::numeric_limits<double>::max();
        }
        return a / b;
    }
}

bool Utility::IsLeapYear(int year) {
    if (year % 100 == 0 && year % 400 == 0) {
        return true;
    }
    if (year % 100 != 0 && year % 4 == 0) {
        return true;
    }
    return false;
}