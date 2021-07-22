#include "pch.h"
#include "gtest/gtest.h"
#include "../Nokia1.3/StableSort.h"
//#include "../Nokia1.3/StableSort.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

struct Testowa
{
    std::pair<char, int> pair;
    bool operator >=( const Testowa& obj)
    {
        return pair.second >= obj.pair.second;
    }
};

class StableSortTest : public ::testing::Test
{
    std::vector<int> vec1 = { 8, 9, 2, 3, 3, 5, 6 };
    std::vector<std::pair<char, int>> vec_of_pairs = { {'b', 3}, {'m', 8}, {'c', 8}, {'a', 1} };

protected:
    StableSortTest() {};
    ~StableSortTest() override {};


    void SetUp() override {};
    void TearDown() override {};

};

TEST_F(StableSortTest, VerifyAddresses)
{


    //EXPECT_(utils::findInVector(vec, -1), 0);
}

TEST_F(StableSortTest, VerifyOwnStructure)
{
    Testowa input(std::make_pair('m', 1));
    auto result = utils::stableSort(input);
    ASSERT_EQ(result, expected);

    //EXPECT_(utils::findInVector(vec, -1), 0);
}


TEST_F(StableSortTest, change_this_name2)
{

}

TEST_F(StableSortTest, change_this_name3)
{

}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}