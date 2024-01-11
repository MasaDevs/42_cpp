#include <iostream>
#include <climits>

int main()
{
	std::cout <<  (static_cast<double>(INT_MAX) == static_cast<double>(2147483648) ? "eq" : "neq") << std::endl;
}

