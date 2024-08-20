#include <gtest/gtest.h>
#include "StringCalculator.h"

TEST(string_calculator_add_when_passed_a_single_number, returns_0_for_empty_string) 
{
  //Arrange
  StringCalculator calculator;
  string inp = "";
  int expectedSum = 0;
  //Act
  int actualSum = calculator.Add(inp);
  //Assert
  ASSERT_EQ(actualSum,expectedSum);
}

TEST(string_calculator_add_when_passed_a_single_number, returns_0_for_zero) 
{
  StringCalculator calculator;
  string inp = "0";
  int expectedSum = 0;
  int actualSum = calculator.Add(inp);

  ASSERT_EQ(actualSum,expectedSum);
}

TEST(string_calculator_add_when_passed_a_single_number, returns_1_for_one) 
{
  StringCalculator calculator;
  string inp = "1";
  int expectedSum = 1;
  int actualSum = calculator.Add(inp);

  ASSERT_EQ(actualSum,expectedSum);
}


TEST(string_calculator_add_when_passed_two_comma_delimited_numbers, returns_their_sum) 
{
  StringCalculator calculator;
  string inp = "1,2";
  int expectedSum = 3;
  int actualSum = calculator.Add(inp);

  ASSERT_EQ(actualSum,expectedSum);
}
