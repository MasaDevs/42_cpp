#include "Span.hpp"
#include <vector>

int main()
{
	try
	{
		std::cout << "--------- Span Range Check ----------" << std::endl;
		Span span(5);
		std::cout << "span size: " << span.size() << std::endl;
		span.addNumber(INT_MAX);
		span.addNumber(INT_MIN);
		std::cout << "shortest: " << span.shortestSpan() << std::endl;
		std::cout << "longest: " << span.longestSpan() << std::endl;
		span.addNumber(0);
		std::cout << "shortest: " << span.shortestSpan() << std::endl;
		std::cout << "longest: " << span.longestSpan() << std::endl;
		span.addNumber(2);
		span.addNumber(2);
		std::cout << "shortest: " << span.shortestSpan() << std::endl;
		std::cout << "longest: " << span.longestSpan() << std::endl;
		span.addNumber(2);
	}
	catch (std::exception &e)
	{
			std::cerr << "Error: "<< e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		const int size = 10000;
		Span span(size);
		std::vector<int>	v(size);
		std::cout << "span size: " << span.size() << std::endl;
		for (int i = 0; i < size; i++)
			v[i] = i;
		span.addNumbers(v.begin(), v.end());
		std::cout << "shortest: " << span.shortestSpan() << std::endl;
		std::cout << "longest: " << span.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
			std::cerr << "Error: "<< e.what() << std::endl;
	}
	std::cout << std::endl;
}

