#ifndef	RPN_HPP
#define	RPN_HPP

#include <iostream>
#include <string>
#include <stack>

enum Operator 
{
	add,
	sub,
	mul,
	dev
};

class	RPN
{
	public:
		int		perse(std::string);
		void	checkFormat(std::string);
		void	calc(int ope);
		void	push(int num);
	private:
		std::stack<int> stk;
};
#endif

