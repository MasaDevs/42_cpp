#ifndef WrongCat_HPP
#define WrongCat_HPP
#include "WrongAnimal.hpp"
#include <iostream>
#include <string>
class	WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongCat const &wrongcat);
		~WrongCat();
		WrongCat	&operator=(WrongCat const &wrongcat);
		void		makeSound(void) const;
};
#endif
