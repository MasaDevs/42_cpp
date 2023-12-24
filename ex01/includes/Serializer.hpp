#ifndef	SERIALIZATION_HPP
#define	SERIALIZATION_HPP
#include <iostream>
#include <cstdint>
#include <string>
#include "Data.hpp"
class	Serializer
{
	public:
		static uintptr_t	serialize(Data *ptr);
		static Data			*deserialize(uintptr_t raw);
	private:
		Serializer();
		Serializer(Serializer const &serializer);
		~Serializer();
		Serializer	&operator=(Serializer serializer);
};
#endif
