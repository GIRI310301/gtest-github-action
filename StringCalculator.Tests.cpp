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
