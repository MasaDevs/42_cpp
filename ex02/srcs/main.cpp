#include "MutantStack.hpp"
#include <stack>

int main()
{


	{
		std::cout << "---------- Subject Test ----------" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		std::cout << "-- Inside MutantStack --" << std::endl;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::cout << "-- End --" << std::endl;
		std::stack<int> s(mstack);
	}
	{
		std::cout << "---------- Const Iterator Test ----------" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::const_iterator it = mstack.begin();
		MutantStack<int>::const_iterator ite = mstack.end();
		++it;
		--it;
		std::cout << "-- Inside MutantStack --" << std::endl;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::cout << "-- End --" << std::endl;
		std::stack<int> s(mstack);
	}
	{
		std::cout << "---------- Reverse Iterator Test ----------" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::reverse_iterator it = mstack.rbegin();
		MutantStack<int>::reverse_iterator ite = mstack.rend();
		++it;
		--it;
		std::cout << "-- Inside MutantStack --" << std::endl;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::cout << "-- End --" << std::endl;
		std::stack<int> s(mstack);
	}
	{
		std::cout << "---------- Reverse Const Iterator Test ----------" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::const_reverse_iterator it = mstack.rbegin();
		MutantStack<int>::const_reverse_iterator ite = mstack.rend();
		++it;
		--it;
		std::cout << "-- Inside MutantStack --" << std::endl;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::cout << "-- End --" << std::endl;
		std::stack<int> s(mstack);
	}
}
