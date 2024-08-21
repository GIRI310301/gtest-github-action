#include <gtest/gtest.h>
#include "Celsius.h"

extern int alertFailureCount;
//int (*networkAlerter)(float celcius);
// Mock function to simulate the network response
// int mockNetworkAlerterSuccess(float celcius) {
//     return 200;  // Simulate success response
// }

// int mockNetworkAlerterFailure(float celcius) {
//     return 500;  // Simulate failure response
// }

// Test fixture class
class AlertCelsiusTest : public ::testing::Test {
protected:
    void SetUp() override {
        alertFailureCount = 0;
    }
    void TearDown() override {
    }  
};

TEST_F(AlertCelsiusTest, TestNoIncrementOnSuccess) {
    //networkAlerter = mockNetworkAlerterSuccess(100.0);
    alertInCelcius(100.0);

    ASSERT_EQ(alertFailureCount, 0);
}

TEST_F(AlertCelsiusTest, TestIncrementOnFailure) {
    //networkAlerter = mockNetworkAlerterFailure(101.0);
    alertInCelcius(101.0);

    ASSERT_EQ(alertFailureCount, 1);
}
