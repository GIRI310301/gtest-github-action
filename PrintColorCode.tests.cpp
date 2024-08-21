#include "PrintColorCode.h"
#include <gtest/gtest.h>

// Having an error
// TEST(PrintColorCodeTestSuite, ColorCodeManualCount)
// {
//   int count = 25;
//   int actualCount = printColorMap();
//   ASSERT_EQ(count,actualCount);
// }

//After refactoring, Here we use STUB as a Interation Testing (Fake function in place of printOnTerminal function)
//This is also known as TestDouble concept
void FakePrinter(int colorCode, const char* majorColor,const char* minorColor){
  
}
TEST(PrintColorCodeTestSuite, AssertColorCodeManualItemsCount){
//Arrange
  int expectedCount=25;
 //Act
  int actualCount=printColorMap(&FakePrinter);
  //Assert
  ASSERT_EQ(expectedCount,actualCount);
}
