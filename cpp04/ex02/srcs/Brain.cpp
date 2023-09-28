#include <iostream>
#include <string>
#include "Brain.hpp" 

Brain::Brain()
{
	std::cout << "Brain Constructor" << std::endl;
	return ;
}

Brain::Brain(Brain const &brain)
{
	std::cout << "Brain Copy Constructor" << std::endl;
	*this = brain;
	return ;
}

Brain	&Brain::operator=(Brain const &brain)
{
	if (this != &brain)
		for (int i = 0; i < 100; i++)
			this->ideas[i] = brain.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor" << std::endl;
	return ;
}

