#ifndef	MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <class T>
class	MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		MutantStack(){};
		MutantStack(MutantStack const &mstack){*this = mstack;};
		~MutantStack(){};
		MutantStack &operator=(MutantStack const &mstack) {if (this != &mstack){this->c = mstack.c;} return (*this);};
		iterator	begin(){return (this->c.begin());}
		iterator	end(){return (this->c.end());}
};

#endif
