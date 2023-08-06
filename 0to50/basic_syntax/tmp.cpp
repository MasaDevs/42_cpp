#include <iostream>

int Add(int x, int y)
{
	return (x + y);
}

int main()
{
	int (*f)(int, int) = Add;
	std::cout << f(4, 6) << std::endl;
}
