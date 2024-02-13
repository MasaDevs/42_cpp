#ifndef	MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template <class T, class Container=std::deque<T> >
class	MutantStack : public std::stack<T, Container>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		MutantStack(){};
		MutantStack(MutantStack const &mstack){*this = mstack;};
		~MutantStack(){};
		MutantStack &operator=(MutantStack const &mstack){ std::stack<T>::operator=(mstack); return (*this);};
		iterator	begin(){return (this->c.begin());};
		iterator	end(){return (this->c.end());};
		const_iterator cbegin(){return (this->c.begin());};
		const_iterator cend() {return (this->c.end());};
		reverse_iterator rbegin() {return (this->c.rbegin());};
		reverse_iterator rend() {return (this->c.rend());};
		const_reverse_iterator crbegin() {return (this->c.rbegin());};
		const_reverse_iterator crend() {return (this->c.rend());};
};

#endif
