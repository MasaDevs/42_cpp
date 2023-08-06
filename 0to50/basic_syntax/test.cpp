#include <iostream>
#include <cstdint>

enum Day {
	Sun,
	Mon,
	Tue,
	Wed,
	Thu,
	Fri,
	Sat
};

int main()
{
	int y = 130;
	int X = 129;
	const int* x = &X;
	x = &y;
	std::cout << *x << std::endl;

}
