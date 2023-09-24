#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class	Harl
{
	public:
		void				complain(std::string level);
	private:
		void				debug(void) const;
		void				info(void) const;
		void				warning(void) const;
		void				error(void) const;
		static int const	num_of_level = 4; 
};

#endif
