#include "utility.h"

#include <iostream>

#include "gtest/gtest.h"

using namespace std;

class UtilityTest : public ::testing::Test {

protected:

void SetUp() override {
    cout << "SetUp runs before each case." << endl;
}

void TearDown() override {
    cout << "TearDown runs after each case." << endl;
}

Utility util;

};

TEST(TestCalculationInt, ArithmeticCalculationInt) {
    Utility util;
    EXPECT_EQ(util.ArithmeticCalculation(ADD, 1, 1), 2);
    EXPECT_EQ(util.ArithmeticCalculation(MINUS, 2, 1), 1);
    EXPECT_EQ(util.ArithmeticCalculation(MULTIPLE, 3, 3), 9);
    EXPECT_EQ(util.ArithmeticCalculation(DIVIDE, 10, 2), 5);
    EXPECT_GT(util.ArithmeticCalculation(DIVIDE, 10, 0), 999999999);
}

TEST_F(UtilityTest, ArithmeticCalculationDouble) {
    EXPECT_EQ(util.ArithmeticCalculation(ADD, 1.1, 1.1), 2.2);
}

TEST_F(UtilityTest, ArithmeticCalculationIsLeapYear) {
    EXPECT_FALSE(util.IsLeapYear(1997));
    EXPECT_TRUE(util.IsLeapYear(2000));
    EXPECT_TRUE(util.IsLeapYear(2016));
    EXPECT_TRUE(util.IsLeapYear(2018)); // This will fail
    EXPECT_FALSE(util.IsLeapYear(2100));
}

