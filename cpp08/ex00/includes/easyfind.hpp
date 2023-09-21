#ifndef	EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <iterator>

template <
	template< class > class  T >
T< int >::iterator	easyfind(T< int > container, unsigned int index)
{
	for (T< int >::iterator iter = container.begin(); iter != container.end(); iter++)
		if (*iter == index)
			return (iter);
	return (container.end());
}

#endif

