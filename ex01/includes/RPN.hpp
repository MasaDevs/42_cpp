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
		RPN();
		RPN(RPN const &rpn);
		RPN &operator=(RPN const &rpn);
		~RPN();
		int	perse(std::string const &);
		void	checkFormat(std::string const &);
		void	calc(int ope);
		void	push(int num);
	private:
		std::stack<int> stk;
};
#endif

