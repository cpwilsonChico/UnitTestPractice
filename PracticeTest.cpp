/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_palindrome_simple)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("abc");
    ASSERT_FALSE(actual);
}
TEST(PracticeTest, is_medium_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("abcdefgfedcba");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, is_palindrome_spaces)
{
    Practice obj;
    bool actual = obj.isPalindrome("was it a rat i saw");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, is_palindrome_nonalphanumeric)
{
    Practice obj;
    bool actual = obj.isPalindrome("a_bb_a");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, is_palindrome_numeric)
{
    Practice obj;
    bool actual = obj.isPalindrome("1614161");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, is_not_palindrome_numeric)
{
    Practice obj;
    bool actual = obj.isPalindrome("884788");
    ASSERT_FALSE(actual);
}

