#ifndef	ARRAY_HPP
#define	ARRAY_HPP
#include <iostream>
#include <exception>

template <typename T>
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

template <typename T>
Array<T>::Array()
{
	this->array = nullptr;
	this->array_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->array = new T[n];
	this->array_size = n;
}

template <typename T>
Array<T>::Array(Array const &array)
{
	this->array_size = array.size();
	this->array = new T[this->size()];
	for (unsigned int i = 0; i < this->size(); i++)
	{
		this->array[i] = array[i];
	}
}

template <typename T>
Array<T>::~Array()
{
	if (this->size() == 1)
		delete this->array;
	else
		delete [](this->array);
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return (this->array_size);
}

template <typename T>
Array<T>	&Array<T>::operator=(Array const &array)
{
	if (this->size() != array.size())
		throw std::out_of_range("range error");
	for (unsigned int i = 0; i < this->size(); i++)
	{
		this->array[i] = array[i];
	}
	return (*this);
}
		
template <typename T>
T	 Array<T>::operator[](unsigned int index)
{
	if (this->size() <= index)
		throw std::out_of_range("range error");
	return (this->array[index]);
}

template <typename T>
const T	 Array<T>::operator[](unsigned int index) const
{
	if (this->size() <= index)
		throw std::out_of_range("range error");
	return (this->array[index]);
}

#endif
