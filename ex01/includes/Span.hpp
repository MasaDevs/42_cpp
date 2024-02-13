#ifndef	SPAN_HPP
#define	SPAN_HPP

#include <iostream>
#include <exception>
#include <numeric>
#include <algorithm>
#include <set>
#include <vector>
#include <deque>
class	Span
{
	public:
		Span(unsigned int n);
		Span(Span const &span);
		Span	&operator=(Span const &span);
		~Span();
		void			addNumber(int num);
		//void			addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		template <typename Iterator>
		void	addNumbers(Iterator begin, Iterator end)
		{
			for (Iterator iter = begin; iter != end; iter++)
			{
				this->addNumber(*iter);
			}
		}
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		static unsigned int	calc_distance(int a, int b);
	private:
		std::multiset<int>		s;
		unsigned int			N;
};

#endif
