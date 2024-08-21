#include <gtest/gtest.h>
#include "StringCalculator.h"

class string_calculator_add_Fixture:public testing::Test{
  protected:
  StringCalculator calculator;

};
class string_calculator_add_Parameter_Fixture:
                                 public string_calculator_add_Fixture, 
                                 public testing::WithParamInterface<std::tuple<std::string,int>>{
  protected:
  StringCalculator calculator;

};
INSTANTIATE_TEST_SUITE_P(SingleNumberParameter,
                         string_calculator_add_Parameter_Fixture,
                         testing::Values(
                                        std::make_tuple("1", 1),
                                        std::make_tuple("1,2",3),
                                        std::make_tuple("1,2,3",6),
                                        std::make_tuple("1\n2,3",6),
                                        std::make_tuple("42,1001,3",45),
                                        std::make_tuple("//[**][%^]\n4**1%^9",14)
  ));

TEST_P(string_calculator_add_Parameter_Fixture,when_passed_a_single_Or_Multiple_Number_with_Delimiters_returns_Sum){
 //Arrange
  string input=std::get<0>(GetParam());
  int expectedsum=std::get<1>(GetParam());
  //Act
  int actualSum=calculator.Add(input);
  //Assert
  ASSERT_EQ(actualSum,expectedsum);
}
