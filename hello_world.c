// first file

#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        return 0; // or handle error
    }
}

int main() {
    printf("Hello, World!\n");

    printf("add(3, 4) = %d\n", add(3, 4));
    printf("subtract(3, 4) = %d\n", subtract(3, 4));
    printf("multiply(3, 4) = %d\n", multiply(3, 4));
    printf("divide(3, 4) = %d\n", divide(3, 4));
    return 0;
}
