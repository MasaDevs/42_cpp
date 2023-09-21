#ifndef	SPAN_HPP
#define	SPAN_HPP

#include <iostream>
#include <climits>
#include <exception>
#include <algorithm>
#include <vector>
class	Span
{
	public:
		Span(unsigned int N);
		~Span();
		void		addNumber(int num);
		long long	shortestSpan();
		long long	longestSpan();
	private:
		std::vector<int>		V;
		unsigned int			N;
};

#endif
