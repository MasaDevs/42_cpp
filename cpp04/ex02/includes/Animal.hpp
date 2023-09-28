#ifndef Animal_HPP
#define Animal_HPP
#include "Brain.hpp"
#include <iostream>
#include <string>

class	AAnimal
{
	public:
		AAnimal();
		AAnimal(AAnimal const &AAnimal);
		virtual ~AAnimal();
		virtual void	makeSound(void) const;
		std::string		getType(void);
		AAnimal	&operator=(AAnimal const &AAnimal);
	protected:
		std::string		type;
	private:
		Brain			*my_brain;
};
#endif
