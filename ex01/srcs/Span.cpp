#include "Span.hpp"

Span::Span(unsigned int n) : N(n)
{
	std::cout << "Default Constructor" << std::endl;
	return ;
}

Span::~Span()
{
	std::cout << "Default Destructor" << std::endl;
	return ;
}

Span::Span(Span const &span)
{
	std::cout << "Copy Constructor" << std::endl;
	*this = span;
}

Span	&Span::operator=(Span const &span)
{
	if (this != &span)
	{
		this->s = span.s;
		this->N = span.N;
	}
	return (*this);
}

unsigned int	Span::size()
{
	return (N);
}

void	Span::addNumber(int num)
{
	if (N < s.size() + 1)
		throw std::range_error("Span is full.");
	s.insert(num);
}

unsigned int Span::calc_distance(int a, int b)
{
	if (b < a)
		return (calc_distance(b, a));
	if (a < 0 && b < 0)
		return (static_cast<unsigned int>(std::abs(b)) - static_cast<unsigned int>(std::abs(a)));
	else if (a < 0)
		return (static_cast<unsigned int>(std::abs(a)) + static_cast<unsigned int>(b));
	return (static_cast<unsigned int>(b - a));
}

unsigned int	Span::shortestSpan()	
{
	if (s.size() < 2)	
		throw std::range_error("shortestSpan: No span found.");

	std::deque<unsigned int> diff(s.size());
	std::adjacent_difference(s.begin(), s.end(), diff.begin(), calc_distance);

	diff.pop_front();
	std::sort(diff.begin(), diff.end());

	return (*(diff.begin()));
}

unsigned int	Span::longestSpan()	
{
	if (s.size() < 2)
		throw std::range_error("longestSpan: No span found.");
	return (this->calc_distance(*(s.begin()), *(s.rbegin())));
}
