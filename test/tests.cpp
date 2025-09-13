#include <gtest/gtest.h>
// #include "string"
#include "../my_pow/pow.h"
#include "../ans/ans.h"

TEST(test_pow_01_01, basic_test_set)
{
    ASSERT_TRUE(pow(3, 3) == 27);
}

TEST(test_pow_02_02, basic_test_set)
{
    ASSERT_TRUE(pow(1000, 0) == 1);
}

TEST(test_ans_01_03, basic_test_set)
{
    ASSERT_TRUE(ans("101010") == 7);
}

TEST(test_ans_02_04, basic_test_set)
{
    ASSERT_TRUE(ans("0") == 0);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}