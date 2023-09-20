#include "Array.hpp" 
template <class T>
Array<T>::Array()
{
	this->array = nullptr;
	this->array_size = 0;
}

template <class T>
Array<T>::Array(unsigned int n)
{
	this->array = new T[n];
	this->array_size = n;
}

template <class T>
Array<T>::Array(Array const &array)
{
	this->array_size = array.size();
	this->array = new T[this->size()];
	for (unsigned int i = 0; i < this->size(); i++)
	{
		this->array[i] = array[i];
	}
}

template <class T>
Array<T>::~Array()
{
	if (this->size() == 1)
		delete this->array;
	else
		delete [](this->array);
}

template <class T>
unsigned int	Array<T>::size() const
{
	return (this->array_size);
}

template <class T>
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
		
template <class T>
T	 Array<T>::operator[](unsigned int index)
{
	if (this->size() <= index)
		throw std::out_of_range("range error");
	return (this->array[index]);
}

template <class T>
const T	 Array<T>::operator[](unsigned int index) const
{
	if (this->size() <= index)
		throw std::out_of_range("range error");
	return (this->array[index]);
}

