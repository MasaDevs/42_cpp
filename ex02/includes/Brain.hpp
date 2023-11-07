#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <string>

class	Brain
{
	public:
		Brain();
		Brain(Brain const &brain);
		~Brain();
		Brain	&operator=(Brain const &brain);
		void			show_array(void) const;
	private:
		std::string		ideas[100];
};
#endif
