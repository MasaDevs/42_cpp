// #include <iostream>
// 
// int func(void);
// 
// int main()
// {
// 	const int hi = 5;
// 	std::cout << hi << std::endl;
// 	int HI = const_cast<int>(hi);
// 	HI = 8;
// 	std::cout << HI << std::endl;
// 	
// 
// 	return (EXIT_SUCCESS);
// }

#include <iostream>

void foo(int const& x)
{
    int& y = const_cast<int&>(x);
    y = 567;
}

int main()
{
    const int x = 123;
	int *y = &x;
    foo(x);
    std::cout << x << "\n";
}
