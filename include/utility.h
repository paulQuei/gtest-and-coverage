// utility.h

#ifndef INCLUDE_UTILITY_
#define INCLUDE_UTILITY_

enum CalcType {
    ADD,
    MINUS,
    MULTIPLE,
    DIVIDE
};

class Utility {
public:
    int ArithmeticCalculation(CalcType op, int a, int b);

    double ArithmeticCalculation(CalcType op, double a, double b);

    bool IsLeapYear(int year);
};

#endif