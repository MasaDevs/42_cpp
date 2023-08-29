#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <string>

class	Brain
{
	public:
		Brain();
		~Brain();
		void			show_array(void) const;
	private:
		std::string		ideas[100];
};
#endif
