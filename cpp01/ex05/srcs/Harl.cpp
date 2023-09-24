#include "Harl.hpp"
#include <iostream>
#include <string>

void	Harl::debug(void) const
{
	std::cout << " love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
	return ;
}

void	Harl::info(void) const
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return ;
}

void	Harl::warning(void) const
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void	Harl::error(void) const
{
	std::cout << "This is unacceptable! I want to speak to the manager now" << std::endl;
	return ;
}

void	Harl::complain(std::string level)
{
	std::string const level_list[num_of_level] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*func_list[num_of_level])(void) const = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for(int i = 0; i < num_of_level; i++)
	{
		if(level == level_list[i])
			(this->*func_list[i])();
	}
	return ;
}
