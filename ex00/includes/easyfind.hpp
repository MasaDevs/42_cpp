#ifndef	EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm>
#include <iterator>

template <class T>
typename T::iterator	easyfind(T &container, int num)
{
	return (std::find(container.begin(), container.end(), num));
}

template <class T>
typename T::const_iterator	easyfind(T const &container, int num)
{
	return (std::find(container.begin(), container.end(), num));
}
#endif
