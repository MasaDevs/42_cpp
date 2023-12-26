#include <iostream>
#include "Array.hpp"

int main()
{
	Array<int> array(10);
	array[1] = 1;
	std::cout << array[1] << std::endl;
	std::cout << "this program ends successfully." << std::endl;
	return (0);
}
