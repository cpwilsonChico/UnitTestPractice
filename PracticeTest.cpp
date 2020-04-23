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
    ASSERT_FALSE(actual);
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
TEST(PracticeTest, is_not_palindrome_nonalphanumeric)
{
    Practice obj;
    bool actual = obj.isPalindrome("12XA_$SA1#_l;");
    ASSERT_FALSE(actual);
}
TEST(PracticeTest, is_palindrome_nonalphanumeric2)
{
    Practice obj;
    bool actual = obj.isPalindrome("12XA_$SA1AS$_AX21");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, is_palindrome_nonalphanumeric3)
{
    Practice obj;
    bool actual = obj.isPalindrome("12XA_$SA11AS$_AX21");
    ASSERT_TRUE(actual);
}



TEST(PracticeTest, is_descending_basic)
{
    Practice obj;
    int a = 1;
    int b = 2;
    int c = 3;
    obj.sortDescending(a, b, c);
    ASSERT_GE(a, b);
    ASSERT_GE(b, c);
    ASSERT_GE(a, c);
}
TEST(PracticeTest, is_descending_basic2)
{
    Practice obj;
    int a = 10;
    int b = 20;
    int c = 30;
    obj.sortDescending(a, b, c);
    ASSERT_GE(a, b);
    ASSERT_GE(b, c);
    ASSERT_GE(a, c);
}
TEST(PracticeTest, is_descending_scrambled)
{
    Practice obj;
    int a = 3;
    int b = 1;
    int c = 2;
    obj.sortDescending(a, b, c);
    ASSERT_GE(a, b);
    ASSERT_GE(b, c);
    ASSERT_GE(a, c);
}
TEST(PracticeTest, is_descending_scrambled2)
{
    Practice obj;
    int a = 16;
    int b = 25;
    int c = 0;
    obj.sortDescending(a, b, c);
    ASSERT_GE(a, b);
    ASSERT_GE(b, c);
    ASSERT_GE(a, c);
}
TEST(PracticeTest, is_descending_negative)
{
    Practice obj;
    int a = -2;
    int b = 0;
    int c = 2;
    obj.sortDescending(a, b, c);
    ASSERT_GE(a, b);
    ASSERT_GE(b, c);
    ASSERT_GE(a, c);
}
TEST(PracticeTest, is_descending_negative2)
{
    Practice obj;
    int a = -5602;
    int b = -9153;
    int c = -9;
    obj.sortDescending(a, b, c);
    ASSERT_GE(a, b);
    ASSERT_GE(b, c);
    ASSERT_GE(a, c);
}
TEST(PracticeTest, is_descending_ascending)
{
    Practice obj;
    int a = 3;
    int b = 2;
    int c = 1;
    obj.sortDescending(a, b, c);
    ASSERT_GE(a, b);
    ASSERT_GE(b, c);
    ASSERT_GE(a, c);
}
TEST(PracticeTest, is_descending_ascending_negative)
{
    Practice obj;
    int a = -650;
    int b = -430;
    int c = -5;
    obj.sortDescending(a, b, c);
    ASSERT_GE(a, b);
    ASSERT_GE(b, c);
    ASSERT_GE(a, c);
}
TEST(PracticeTest, is_descending_mix)
{
    Practice obj;
    int a = -501;
    int b = 750;
    int c = -999;
    obj.sortDescending(a, b, c);
    ASSERT_GE(a, b);
    ASSERT_GE(b, c);
    ASSERT_GE(a, c);
}
TEST(PracticeTest, is_descending_equal)
{
    Practice obj;
    int a = 6;
    int b = 3;
    int c = 6;
    obj.sortDescending(a, b, c);
    ASSERT_GE(a, b);
    ASSERT_GE(b, c);
    ASSERT_GE(a, c);
}
TEST(PracticeTest, is_descending_equal_negative)
{
    Practice obj;
    int a = -4;
    int b = -1;
    int c = -1;
    obj.sortDescending(a, b, c);
    ASSERT_GE(a, b);
    ASSERT_GE(b, c);
    ASSERT_GE(a, c);
}

