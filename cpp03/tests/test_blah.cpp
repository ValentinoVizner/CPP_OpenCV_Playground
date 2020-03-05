#include "hello.h"
#include <gtest/gtest.h>

TEST(TestBlah, OutputTest) { EXPECT_EQ(1, Sum(1, 1)); }