#ifndef	DATA_HPP
#define	DATA_HPP
#include <iostream>
#include <string>

class	Data
{
	public:
		Data();
		Data(std::string);
		~Data();
		std::string	getData(void);
		void		setData(std::string);
	private:
		std::string		data;
};
#endif
