#include "PrintColorCode.h"
#include <gtest/gtest.h>

TEST(PrintColorCodeTestSuite, ColorCodeManualCount)
{
  int count = 25;
  int actualCount = printColorMap();
  ASSERT_EQ(count,actualCount);
}

