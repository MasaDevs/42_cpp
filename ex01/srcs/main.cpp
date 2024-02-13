#include "Span.hpp"
#include <vector>

int main()
{
	std::cout << Span::calc_distance(1, 2) << std::endl;
	std::cout << Span::calc_distance(2, 1) << std::endl;
	try
	{
		std::cout << "--------- Span Range Check ----------" << std::endl;
		Span span(6);
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

	try
	{
		const int size = 10000;
		Span span(size);
		std::vector<int>	v(size);
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
}

