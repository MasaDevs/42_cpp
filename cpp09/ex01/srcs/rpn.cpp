#include "rpn.hpp"

int	RPN::perse(std::string str)
{
	int		ans;
	this->checkFormat(str);
	for(size_t i = 0; i < str.size(); i++)
	{
		if (i % 2)
			continue ;
		else if('0' <= str[i] && str[i] <= '9')
			this->push(str[i] - '0');
		else if (str[i] == '+')
				this->calc(add);
		else if (str[i] == '-')
				this->calc(sub);
		else if (str[i] == '*')
				this->calc(mul);
		else if (str[i] == '/')
				this->calc(dev);
		else
			throw	std::logic_error("The operand is invalid.");
	}
	ans = this->stk.top();
	this->stk.pop();
	if (!stk.empty())
		throw	std::logic_error("The operand is invalid.");
	return (ans);
}
		
void	RPN::calc(int ope)
{
	if (this->stk.size() < 2)
		throw	std::logic_error("This grammer is invalid.");
	int		second = this->stk.top(); this->stk.pop();
	int		first = this->stk.top(); this->stk.pop();

	if (ope == add)
		first += second;
	else if (ope == sub)
		first -= second;
	else if (ope == mul)
		first *= second;
	else if (ope == dev)
		first /= second;
	else
		throw	std::logic_error("This grammer is invalid.");
	stk.push(first);
}

void	RPN::checkFormat(std::string str)
{
	for (size_t i = 0; i < str.size(); i++)
		if (i % 2)
			if (!std::isspace(str[i]))
				throw	std::logic_error("the word should be separated by isspace.");
}

void	RPN::push(int num)
{
	this->stk.push(num);
}
		
	
