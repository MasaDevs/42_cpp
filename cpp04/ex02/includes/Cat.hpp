#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include <iostream>
#include <string>
class	Cat:public AAnimal
{
	public:
		Cat();
		Cat(Cat const &cat);
		~Cat();
		void	makeSound(void) const;
		Cat		&operator=(Cat const &cat);
};
#endif
