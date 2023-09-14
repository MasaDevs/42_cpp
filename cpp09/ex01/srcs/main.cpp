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
		int		perse(std::string str);
		void	calc(int ope);
		void	push(int num);
	private:
		std::stack<int> stk;
};

int	RPN::perse(std::string str)
{
	int		ans;
	for(unsigned int i = 0; i < str.size(); i++)
	{
		if('0' <= str[i] && str[i] <= '9')
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
			return ; //error!
	}
	ans = this->stk.top();
	this->stk.pop();
	return (ans);
}
		
void	RPN::calc(int ope)
{
	int		second = this->stk.top();
	this->stk.pop();
	int		first = this->stk.top();
	std::cout << first << " " << second << std::endl;
	this->stk.pop();
	if (ope == add)
		first += second;
	else if (ope == sub)
		first -= second;
	else if (ope == mul)
		first *= second;
	else if (ope == dev)
		first /= second;
	else
		return ; //error
	stk.push(first);
}

void	RPN::push(int num)
{
	//if stack is over 2 its ERROR!
	this->stk.push(num);
}
		
	
int main(int argc, char *argv[])
{
	RPN rpn;

	std::cout << argc << std::endl;
	std::cout << rpn.perse(argv[1]) << std::endl;
}
