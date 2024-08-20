#include "StringCalculator.h"
#include <gtest/gtest.h>

//Fixture
class StringCalculatorAddTestFixture:public testing::Test{
  protected:
    //Common Reusable Code
    StringCalculator calculator;
    //Hook Callbacks
};

TEST_F(StringCalculatorAddTestFixture,when_passed_a_single_number_returns_0_for_empty_string)
{
 //Arrange
  string input="";
  int expectedsum=0;
  //Act
  int actualSum=calculator.Add(input);
  //Assert
  ASSERT_EQ(actualSum,expectedsum);
}

TEST_F(StringCalculatorAddTestFixture,when_passed_a_single_number_returns_0_for_zero)
{
 //Arrange
  string input="0";
  int expectedsum=0;
  //Act
  int actualSum=calculator.Add(input);
  //Assert
  ASSERT_EQ(actualSum,expectedsum);
}

TEST_F(StringCalculatorAddTestFixture, string_calculator_add_when_passed_a_single_number_returns_1_for_one) 
{
  string inp = "1";
  int expectedSum = 1;
  int actualSum = calculator.Add(inp);

  ASSERT_EQ(actualSum,expectedSum);
}

TEST_F(StringCalculatorAddTestFixture, string_calculator_add_when_passed_two_comma_delimited_numbers_returns_their_sum) 
{
  string inp = "1,2";
  int expectedSum = 3;
  int actualSum = calculator.Add(inp);

  ASSERT_EQ(actualSum,expectedSum);
}

TEST_F(StringCalculatorAddTestFixture, string_calculator_add_when_passed_multiple_comma_delimited_numbers_returns_their_sum) 
{
  string inp = "1,2,3";
  int expectedSum = 6;
  int actualSum = calculator.Add(inp);

  ASSERT_EQ(actualSum,expectedSum);
}

TEST_F(StringCalculatorAddTestFixture, string_calculator_add_when_delimited_with_newline_and_comma_returns_their_sum) 
{
  string inp = "1\n2,3";
  int expectedSum = 6;
  int actualSum = calculator.Add(inp);

  ASSERT_EQ(actualSum,expectedSum);
}

TEST_F(StringCalculatorAddTestFixture, string_calculator_add_when_passed_negative_numbers_throws_an_exception_listing_invalid_values) 
{
  string inp = "1,-2,-4,5";

  ASSERT_THROW(calculator.Add(inp),invalid_argument);
}

TEST_F(StringCalculatorAddTestFixture, string_calculator_add_when_passed_numbers_over_1000_ignores_them) 
{
  string inp = "42,1001,3";
  int expectedSum = 45;
  int actualSum = calculator.Add(inp);

  ASSERT_EQ(actualSum,expectedSum);
}

TEST_F(StringCalculatorAddTestFixture, string_calculator_add_when_passed_multicharacter_delimiter_uses_that_delimiter_to_sum_values) 
{
  string inp = "//[***]\n8***2***3";
  int expectedSum = 13;
  int actualSum = calculator.Add(inp);

  ASSERT_EQ(actualSum,expectedSum);
}

TEST_F(StringCalculatorAddTestFixture, string_calculator_add_when_passed_multiple_delimiters_sums_on_each_delimiter) 
{
  string inp = "//[*][%]\n4*2%3";
  int expectedSum = 9;
  int actualSum = calculator.Add(inp);

  ASSERT_EQ(actualSum,expectedSum);
}

TEST_F(StringCalculatorAddTestFixture, string_calculator_add_when_passed_multiple_multicharacter_delimiters_sums_on_each_delimiter) 
{
  string inp = "//[**][%^]\n4**1%^9";
  int expectedSum = 14;
  int actualSum = calculator.Add(inp);

  ASSERT_EQ(actualSum,expectedSum);
}
