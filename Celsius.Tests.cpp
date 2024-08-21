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
