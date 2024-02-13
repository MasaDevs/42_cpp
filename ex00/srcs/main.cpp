#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

template <typename T>
void	searchNumber(T &container, int num)
{
	typename T::iterator iter = easyfind(container, num);
	if (iter != container.end())
		std::cout << "Number: " << *iter << std::endl;
	else
		std::cerr << "Not Found" << std::endl;
	return ;
}

template <typename T>
void	searchNumber(T const &container, int num)
{
	typename T::const_iterator iter = easyfind(container, num);
	if (iter != container.end())
		std::cout << "Number: " << *iter << std::endl;
	else
		std::cerr << "Not Found" << std::endl;
	return ;
}

int main()
{
	std::vector<int> vec;
	std::list<int> lst;

	for (size_t i = 0; i < 100; i++)
	{
		vec.push_back(i);
		lst.push_back(i);
	}

	std::vector<int> const vec_const(vec);
	std::list<int> const lst_const(lst);

	try	
	{
		searchNumber(vec, 10);
		searchNumber(lst, 10);
		searchNumber(vec_const, 10);
		searchNumber(lst_const, 10);
		
		searchNumber(vec, 90);
		searchNumber(lst, 90);
		searchNumber(vec_const, 90);
		searchNumber(lst_const, 90);

		searchNumber(vec, -10);
		searchNumber(lst, -10);
		searchNumber(vec_const, -10);
		searchNumber(lst_const, -10);

		searchNumber(vec, 101);
		searchNumber(lst, 101);
		searchNumber(vec_const, 101);
		searchNumber(lst_const, 101);
	}
	catch(std::exception &e)
	{
			std::cerr << "Error: " << e.what() << std::endl;
	}
}
