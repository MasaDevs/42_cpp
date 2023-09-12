#include <iostream>
#include "gtest/gtest.h"

unsigned int	factorial(unsigned int	n)
{
		if(n <= 1)
			return (1);
		return (factorial(n - 1) * n);
}

TEST(Factorial Test, HandlesZeroInput)
{
		EXPECT_EQ(1, factorial);
}
int main()
{
		std::cout << factorial(0) << std::endl;
		std::cout << factorial(1) << std::endl;
		std::cout << factorial(2) << std::endl;
		std::cout << factorial(3) << std::endl;
}
