#include <gtest/gtest.h>
#include "header.h"

TEST(SumSliceTest, smallTest)
{
    std::vector<int> vec {-1, -2, 22, -4, 5, 6, 300, 8};
    solution(vec);
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}