#include <gtest/gtest.h>
#include "../ArithmeticOperations.h"

class ArithmeticOperationsTest : public ::testing::Test {
protected:
    ArithmeticOperations calc;
};

// Test for add function
TEST_F(ArithmeticOperationsTest, Add) {
    EXPECT_DOUBLE_EQ(calc.add(2.0, 3.0), 5.0);
    EXPECT_DOUBLE_EQ(calc.add(-1.0, 1.0), 0.0);
    EXPECT_DOUBLE_EQ(calc.add(0.0, 0.0), 0.0);
    EXPECT_DOUBLE_EQ(calc.add(1.5, 2.5), 4.0);
}

// Test for subtract function
TEST_F(ArithmeticOperationsTest, Subtract) {
    EXPECT_DOUBLE_EQ(calc.subtract(5.0, 3.0), 2.0);
    EXPECT_DOUBLE_EQ(calc.subtract(1.0, 1.0), 0.0);
    EXPECT_DOUBLE_EQ(calc.subtract(0.0, 5.0), -5.0);
    EXPECT_DOUBLE_EQ(calc.subtract(10.0, 3.5), 6.5);
}

// Test for multiply function
TEST_F(ArithmeticOperationsTest, Multiply) {
    EXPECT_DOUBLE_EQ(calc.multiply(2.0, 3.0), 6.0);
    EXPECT_DOUBLE_EQ(calc.multiply(-1.0, 5.0), -5.0);
    EXPECT_DOUBLE_EQ(calc.multiply(0.0, 10.0), 0.0);
    EXPECT_DOUBLE_EQ(calc.multiply(1.5, 2.0), 3.0);
}

// Test for divide function
TEST_F(ArithmeticOperationsTest, Divide) {
    EXPECT_DOUBLE_EQ(calc.divide(6.0, 2.0), 3.0);
    EXPECT_DOUBLE_EQ(calc.divide(5.0, 2.0), 2.5);
    EXPECT_DOUBLE_EQ(calc.divide(0.0, 5.0), 0.0);
    EXPECT_DOUBLE_EQ(calc.divide(10.0, 2.5), 4.0);
}

// Test for divide by zero
TEST_F(ArithmeticOperationsTest, DivideByZero) {
    // Since divide prints an error and returns 0.0, we can test the return value
    EXPECT_DOUBLE_EQ(calc.divide(5.0, 0.0), 0.0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}