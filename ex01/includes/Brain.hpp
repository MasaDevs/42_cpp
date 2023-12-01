#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <string>

class	Brain
{
	public:
		Brain();
		Brain(std::string const (&ideas)[100]);
		Brain(Brain const &brain);
		~Brain();
		void	insert_idea(std::string const &idea);
		void	show_array(void) const;
		Brain	&operator=(Brain const &brain);
	private:
		std::string		ideas_[100];
		int				index_;
};
#endif
