#ifndef	EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <iterator>

template <class T >
typename T::iterator	easyfind(T &container, int index)
{
	for (typename T::iterator iter = container.begin(); iter != container.end(); iter++)
		if (*iter == index)
			return (iter);
	return (container.end());
}

#endif

