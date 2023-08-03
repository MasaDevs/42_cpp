#include <iostream>

int func(void);

int main()
{
	std::cout << "IN MAIN" << std::endl;
	func();
	return (EXIT_SUCCESS);
}

int func(void)
{
	int	HI = 5;

	std::cout << "IN FUNC" << std::endl;
	std::cout << HI << std::endl;
	return (EXIT_SUCCESS);
}
	
