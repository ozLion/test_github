#include <iostream>
#include <limits>  // for numeric_limits

using namespace std;

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
            cout << "Error: Division by zero!" << endl;
            return 0.0;
        }
    }
};

int main() {
    ArithmeticOperations calc;
    double num1, num2;

    cout << "Enter first number: ";
    while (!(cin >> num1)) {
        cout << "Invalid input. Please enter a number: ";
        cin.clear();  // 오류 상태 클리어
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // 잘못된 입력 무시
    }

    cout << "Enter second number: ";
    while (!(cin >> num2)) {
        cout << "Invalid input. Please enter a number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Results:" << endl;
    cout << "add(" << num1 << ", " << num2 << ") = " << calc.add(num1, num2) << endl;
    cout << "subtract(" << num1 << ", " << num2 << ") = " << calc.subtract(num1, num2) << endl;
    cout << "multiply(" << num1 << ", " << num2 << ") = " << calc.multiply(num1, num2) << endl;
    cout << "divide(" << num1 << ", " << num2 << ") = " << calc.divide(num1, num2) << endl;

    return 0;
}