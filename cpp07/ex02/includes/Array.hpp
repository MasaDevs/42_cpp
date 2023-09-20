#ifndef	ARRAY_HPP
#define	ARRAY_HPP
#include <iostream>
#include <exception>

template <class T>
class	Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(Array const &arr);
		~Array();
		unsigned int	size() const;
		Array<T>		&operator=(Array const &array);
		T				operator[](unsigned int index);
		const T	 		operator[](unsigned int index) const;
	private:
		T				*array;
		unsigned int	array_size;
};

#endif
