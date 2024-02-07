#include "Span.hpp"

int main()
{
	{
		std::cout << "---------Subject Test------------" << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
	}

	{
		std::cout << "---------Span Test------------" << std::endl;
		try
		{
			Span sp = Span(5);
			std::cout << sp.shortestSpan() << std::endl;
			sp.addNumber(2);
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}

	{
		std::cout << "---------Range Test------------" << std::endl;
		Span sp(10000);
		for (int i = 0; i < 5000; i++)
			sp.addNumber(i);
		sp.addManyNumbers(9999, 5000);
		std::cout << "shortest span: " <<  sp.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
	}
	std::cout << "this program ends successfully !" << std::endl;
}
