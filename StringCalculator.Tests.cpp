#include <gtest/gtest.h>
#include "StringCalculator.h"

StringCalculator calculator;

TEST(string_calculator_add_when_passed_a_single_number, returns_0_for_empty_string) 
{
  //Arrange
  //StringCalculator calculator;
  string inp = "";
  int expectedSum = 0;
  //Act
  int actualSum = calculator.Add(inp);
  //Assert
  ASSERT_EQ(actualSum,expectedSum);
}

TEST(string_calculator_add_when_passed_a_single_number, returns_0_for_zero) 
{
  //StringCalculator calculator;
  string inp = "0";
  int expectedSum = 0;
  int actualSum = calculator.Add(inp);

  ASSERT_EQ(actualSum,expectedSum);
}

TEST(string_calculator_add_when_passed_a_single_number, returns_1_for_one) 
{
  //StringCalculator calculator;
  string inp = "1";
  int expectedSum = 1;
  int actualSum = calculator.Add(inp);

  ASSERT_EQ(actualSum,expectedSum);
}

TEST(string_calculator_add_when_passed_two_comma_delimited_numbers, returns_their_sum) 
{
  //StringCalculator calculator;
  string inp = "1,2";
  int expectedSum = 3;
  int actualSum = calculator.Add(inp);

  ASSERT_EQ(actualSum,expectedSum);
}

TEST(string_calculator_add_when_passed_multiple_comma_delimited_numbers, returns_their_sum) 
{
  //StringCalculator calculator;
  string inp = "1,2,3";
  int expectedSum = 6;
  int actualSum = calculator.Add(inp);

  ASSERT_EQ(actualSum,expectedSum);
}

TEST(string_calculator_add_when_delimited_with_newline_and_comma, returns_their_sum) 
{
  //StringCalculator calculator;
  string inp = "1\n2,3";
  int expectedSum = 6;
  int actualSum = calculator.Add(inp);

  ASSERT_EQ(actualSum,expectedSum);
}

TEST(string_calculator_add_when_passed_negative_numbers, throws_an_exception_listing_invalid_values) 
{
  //StringCalculator calculator;
  string inp = "1,-2,-4,5";

  ASSERT_THROW(calculator.Add(inp),invalid_argument);
}

TEST(string_calculator_add_when_passed_numbers_over_1000, ignores_them) 
{
  //StringCalculator calculator;
  string inp = "42,1001,3";
  int expectedSum = 45;
  int actualSum = calculator.Add(inp);

  ASSERT_EQ(actualSum,expectedSum);
}

TEST(string_calculator_add_when_passed_multicharacter_delimiter, uses_that_delimiter_to_sum_values) 
{
  //StringCalculator calculator;
  string inp = "//[***]\n8***2***3";
  int expectedSum = 13;
  int actualSum = calculator.Add(inp);

  ASSERT_EQ(actualSum,expectedSum);
}

TEST(string_calculator_add_when_passed_multiple_delimiters, sums_on_each_delimiter) 
{
  //StringCalculator calculator;
  string inp = "//[*][%]\n4*2%3";
  int expectedSum = 9;
  int actualSum = calculator.Add(inp);

  ASSERT_EQ(actualSum,expectedSum);
}

TEST(string_calculator_add_when_passed_multiple_multicharacter_delimiters, sums_on_each_delimiter) 
{
  //StringCalculator calculator;
  string inp = "//[**][%^]\n4**1%^9";
  int expectedSum = 14;
  int actualSum = calculator.Add(inp);

  ASSERT_EQ(actualSum,expectedSum);
}
