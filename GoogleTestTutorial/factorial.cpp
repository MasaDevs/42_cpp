#include <iostream>
#include "gtest/gtest.h"


unsigned int	factorial(unsigned int	n)
{
	if(n <= 1)
		return (1);
	return (factorial(n - 1) * n);
}
TEST(FactorialTest, HandlesZeroInput)
{
	EXPECT_EQ(1, factorial(0));
	EXPECT_EQ(1, factorial(0));
	EXPECT_EQ(0, factorial(0));
	EXPECT_EQ(1, factorial(0));
}

TEST(FactorialTest, AAA)
{
	EXPECT_EQ(1, factorial(0));
	EXPECT_EQ(1, factorial(0));
}

int main()
{
	std::cout << "THIS IS TEST" << std::endl;
	return 	(RUN_ALL_TESTS());
}
