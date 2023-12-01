#include <iostream>
#include <string>
#include "Brain.hpp" 

Brain::Brain() : index_(0)
{
	std::cout << "Brain Constructor" << std::endl;
	return ;
}

Brain::Brain(std::string const (&ideas)[100]) : index_(0)
{
	std::cout << "Brain Constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas_[i] = ideas[i];
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
	{
		index_ = brain.index_;
		for (int i = 0; i < 100; i++)
			ideas_[i] = brain.ideas_[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor" << std::endl;
	return ;
}

void	Brain::insert_idea(std::string const &idea)
{
	ideas_[index_] = idea;
	index_ = (index_ + 1) % 100;
}

void	Brain::show_array(void) const
{
	for (int i = 0; i < index_; i++)
		std::cout << ideas_[index_] << std::endl;
}