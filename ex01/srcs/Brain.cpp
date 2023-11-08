#include <iostream>
#include <string>
#include "Brain.hpp" 

Brain::Brain() : index(0)
{
	std::cout << "Brain Constructor" << std::endl;
	return ;
}

Brain::Brain(std::string const (&ideas)[100]) : index(0)
{
	std::cout << "Brain Constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = ideas[i];
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
	this->index = brain.index;
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

void	Brain::insert_idea(std::string const &idea)
{
	this->ideas[index] = idea;
	index = (index + 1) % 100;
}