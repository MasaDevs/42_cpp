#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
	std::cout << "this is Base Destructor" << std::endl;
	return ;
};

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
	}
	catch (std::bad_cast)
	{

	}
	try
	{
		B	b = dynamic_cast<B&>(p);
		std::cout << "It's an B instance!" << std::endl;
	}
	catch (std::bad_cast)
	{

	}
	try
	{
		C	c = dynamic_cast<C&>(p);
		std::cout << "It's an C instance!" << std::endl;
	}
	catch (std::bad_cast)
	{

	}
	return ;
}
