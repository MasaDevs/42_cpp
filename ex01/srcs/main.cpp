#include "iter.hpp"
#include <climits>
#include <iostream>

template <typename T>
void	print(T &e)
{
	std::cout << e << std::endl;

}

void	change_to_n(char &chr)
{
	chr = 'n';
}

int main()
{
	std::cout << "----------PRINT----------" << std::endl;
	int			num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	iter(num, 10, print<int>);
	std::string	str = "masahito arai";
	std::cout << "before iter:	" << str << std::endl;
	iter(str, str.size(), change_to_n);
	std::cout << "after iter:	"<< str << std::endl;
	std::cout << "this program ends successfully." << std::endl;
}
