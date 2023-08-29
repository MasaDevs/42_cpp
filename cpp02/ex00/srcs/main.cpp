#include <iostream>
#include "Fixed.hpp"

int main()
{
	Fixed fixed;
	fixed.setRawBits(100000);
	int ans = fixed.getRawBits();
	std::cout << ans << std::endl;
	fixed.setRawBits(-100);
	ans = fixed.getRawBits();
	std::cout << ans << std::endl;
	Fixed yobi;

	yobi = fixed;
	fixed.setRawBits(100000);
	ans = yobi.getRawBits();
	std::cout << ans << std::endl;

}
