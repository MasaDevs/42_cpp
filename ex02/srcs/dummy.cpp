#include "Array.hpp"

void	generate(void)
{
	Array<int>	*d = new Array<int>(100);
	std::cout << d->size() << std::endl;
}


