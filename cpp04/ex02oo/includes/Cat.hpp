#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include <iostream>
#include <string>
class	Cat:public Animal
{
	public:
		Cat();
		~Cat();
		void	makeSound(void) const override;
};
#endif
