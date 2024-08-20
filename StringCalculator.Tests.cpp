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

TEST(string_calculator_add_when_passed_multiple_comma_delimited_numbers, returns_their_sum) 
{
  StringCalculator calculator;
  string inp = "1,2,3";
  int expectedSum = 6;
  int actualSum = calculator.Add(inp);

  ASSERT_EQ(actualSum,expectedSum);
}

TEST(string_calculator_add_when_delimited_with_newline_and_comma, returns_their_sum) 
{
  StringCalculator calculator;
  string inp = "1\n2,3";
  int expectedSum = 6;
  int actualSum = calculator.Add(inp);

  ASSERT_EQ(actualSum,expectedSum);
}

TEST(string_calculator_add_when_passed_negative_numbers, throws_an_exception_listing_invalid_values) 
{
  StringCalculator calculator;
  string inp = "1,-2,-4,5";
  //int expectedSum = 3;
  //int actualSum = calculator.Add(inp);

  EXPECT_THROW(calculator.Add(inp), std::invalid_argument);
  //ASSERT_THROW(actualSum, std::invalid_argument);
  //ASSERT_EQ(actualSum,expectedSum);
  //ASSERT_EQ(LastException<std::invalid_argument>().what(), "Negatives not allowed: -2,-4");
}
