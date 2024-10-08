#include <gtest/gtest.h>
#include "Celsius.h"

//extern int alertFailureCount;
//int (*networkAlerter)(float celcius);
// Mock function to simulate the network response
// int mockNetworkAlerterSuccess(float celcius) {
//     return 200;  // Simulate success response
// }

// int mockNetworkAlerterFailure(float celcius) {
//     return 500;  // Simulate failure response
// }

// Test fixture class
// class AlertCelsiusTest : public ::testing::Test {
// protected:
//     void SetUp() override {
//         int alertFailureCount = 0;
//     }
//     void TearDown() override {
//     }  
// };

// TEST(AlertCelsiusTest, TestNoIncrementOnSuccess) {
//     //networkAlerter = mockNetworkAlerterSuccess(100.0);
//     int alertFailureCount = 0;
//     float fh = 100;
//     alertInCelcius(fh);

//     ASSERT_EQ(alertFailureCount, 0);
// }

// TEST(AlertCelsiusTest, TestIncrementOnFailure) {
//     //networkAlerter = mockNetworkAlerterFailure(101.0);
//     int alertFailureCount = 0;
//     float fh = 101;
//     alertInCelcius(fh);

//     ASSERT_EQ(alertFailureCount, 1);
// }

int networkAltererStub(float celcius){
    return 500;
}

float celciusArg;
int callCount;
int networkAltererMock(float celcius){
      celciusArg=celcius;
      ++callCount;
  return 500;
}

TEST(TestChallengeTestSuite, StateTesting){
//Arrange
  int expectedFailureCount=1;
  float inputTemp = 100;
   setCount(0);
 //Act
  alertInCelcius(inputTemp,&networkAltererStub);
  //Assert
  ASSERT_EQ(expectedFailureCount, getCount());
  
}
TEST(TestChallengeTestSuite, InteractionTesting){
//Arrange
  int expectedFailureCount=1;
  float inputTempInF = 100.00004; //while comparing the value with expected dependency make sure of the decimal values and use EXPECT_FLOAT_EQ
 setCount(0);
  float expectedCelciusToBeReceivedByDependency=37.7778;
 //Act
  alertInCelcius(inputTempInF,&networkAltererMock);
  
  //Assert
  EXPECT_EQ(expectedFailureCount, getCount());//state Based 
  EXPECT_FLOAT_EQ(celciusArg, expectedCelciusToBeReceivedByDependency);//state Based 
  EXPECT_EQ(callCount,1);
  
  
}
