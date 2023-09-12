#include <iostream>
#include <memory>

int main()
{
	std::unique_ptr<int> uptr(new int(10));
	for(int i = 0; i < 10; i++)
			uptr[i] = i;
}
