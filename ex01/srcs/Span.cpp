#include "Span.hpp"

Span::Span(unsigned int N) : N(N)
{
	std::cout << "Default Constructor" << std::endl;
	return ;
}

Span::~Span()
{
	std::cout << "Default Destructor" << std::endl;
	return ;
}

void	Span::addNumber(int num)
{
	if (this->N < V.size())
		throw std::out_of_range("exceed the size of this vector !");
	this->V.push_back(num);
}

long long	Span::shortestSpan()
{
	long long	span = LLONG_MAX;
	std::vector<int> P = this->V;
	if (this->V.size() < 2)
		throw std::out_of_range("vecotor size is too small !");

	std::sort(P.begin(), P.end());
	for (size_t i = 0; i < P.size() - 1; i++)
		span = std::min(span, static_cast<long long>(std::abs(P[i + 1] - P[i])));
	return (span);
}

long long	Span::longestSpan()
{
	long long	span = LLONG_MIN;
	std::vector<int> P = this->V;
	if (this->V.size() < 2)
		throw std::out_of_range("vecotor size is too small !");

	std::sort(P.begin(), P.end());
	span = std::max(span, static_cast<long long>(P[P.size() - 1] - P[0]));
	return (span);
}
