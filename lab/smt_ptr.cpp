#include <iostream>
#include <memory>

int main(void)
{
	std::unique_ptr<int> up1(new int), up2;
	std::cout << *up1 << std::endl;
	up2 = std::move(up1);
	std::cout << *up1 << std::endl;

}
