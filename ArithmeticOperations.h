#ifndef ARITHMETIC_OPERATIONS_H
#define ARITHMETIC_OPERATIONS_H

#include <iostream>

class ArithmeticOperations {
public:
    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            std::cout << "Error: Division by zero!" << std::endl;
            return 0.0;
        }
    }
};

#endif // ARITHMETIC_OPERATIONS_H