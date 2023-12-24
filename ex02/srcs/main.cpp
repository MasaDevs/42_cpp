#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <typeinfo>
#include <exception>
#include <string>

Base	*generate(void)
{
	std::srand(time(NULL));
	switch (rand() % 3)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		default:
			return (new C());
	}
}
void	identify(Base *p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "It's an A pointer !" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "It's an B pointer !" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "It's an C pointer !" << std::endl;
	return ;
}

void	identify(Base &p)
{
	try
	{
		A	a = dynamic_cast<A&>(p);
		std::cout << "It's an A instance!" << std::endl;
		return ;
	}
	catch (std::bad_cast &e)
	{

	}
	try
	{
		B	b = dynamic_cast<B&>(p);
		std::cout << "It's an B instance!" << std::endl;
		return ;
	}
	catch (std::bad_cast &e)
	{

	}
	try
	{
		C	c = dynamic_cast<C&>(p);
		std::cout << "It's an C instance!" << std::endl;
		return ;
	}
	catch (std::bad_cast &e)
	{
		std::cerr << "Error: Unknown instance" << std::endl;
	}
	return ;
}

int main()
{
	{
		std::cout << "-----------POINTER TEST------------" << std::endl;
		Base	*a_ptr = new A();
		Base	*b_ptr = new B();
		Base	*c_ptr = new C();
		identify(a_ptr);
		identify(b_ptr);
		identify(c_ptr);
		delete a_ptr;
		delete b_ptr;
		delete c_ptr;
		std::cout << "-----------END------------" << std::endl;
	}
	{
		std::cout << "-----------REFERENCE TEST ------------" << std::endl;
		A		a;
		B		b;
		C		c;
		identify(a);
		identify(b);
		identify(c);
		std::cout << "-----------END------------" << std::endl;
	}
	{
		std::cout << "-----------GENERATE TEST------------" << std::endl;
		Base	*ptr = generate();
		identify(ptr);
		delete ptr;
		std::cout << "-----------END------------" << std::endl;
	}
}
