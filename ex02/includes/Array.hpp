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
		T				&operator[](unsigned int index);
		const T	 		&operator[](unsigned int index) const;
	private:
		T				*array_;
		unsigned int	array_size_;
};

template <typename T>
Array<T>::Array() : array_size_(1), array_(new T())
{
}

template <typename T>
Array<T>::Array(unsigned int n) : array_size_(n), array_(new T[n])
{
}

template <typename T>
Array<T>::Array(Array const &array)
{
	*this =  array;
}

template <typename T>
Array<T>::~Array()
{
	if (this->size() == 1)
		delete this->array_;
	else
		delete [](this->array_);
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return (this->array_size_);
}

template <typename T>
Array<T>	&Array<T>::operator=(Array const &array)
{
	if (this->size_() != array.size_())
		throw std::out_of_range("range error");
	for (unsigned int i = 0; i < this->size(); i++)
	{
		this->array_[i] = array.array_[i];
	}
	return (*this);
}

template <typename T>
T	 &Array<T>::operator[](unsigned int index)
{
	if (this->size() < 0 || this->size() <= index)
		throw std::out_of_range("range error");
	return (this->array_[index]);
}

template <typename T>
const T	&Array<T>::operator[](unsigned int index) const
{
	if (this->size() < 0 || this->size() <= index)
		throw std::out_of_range("range error");
	return (this->array_[index]);
}

#endif
