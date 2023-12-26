#include "iter.hpp"
#include <iostream>

void	print(int	num)
{
	std::cout << num << std::endl;
}

void	change_to_n(char &chr)
{
	chr = 'n';
}

int main()
{
	int		num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	char	str[] = "masahito arai";
	iter(num, 10, print);
	std::cout << "before iter:	" << str << std::endl;
	iter(str, 13, change_to_n);
	std::cout << "after iter:	"<< str << std::endl;
	std::cout << "this program ends successfully." << std::endl;
}
