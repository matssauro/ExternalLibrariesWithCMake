#include <gtest/gtest.h>
#include "sum.h"

TEST(HelloTest, BasicAssertions) {

  EXPECT_EQ(sum(3,4), 7);
}
