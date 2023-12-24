#ifndef	DATA_HPP
#define	DATA_HPP
#include <iostream>
#include <string>

class	Data
{
	public:
		Data();
		Data(std::string const &);
		Data(Data const &);
		Data		&operator=(Data const &);
		~Data();
		std::string	const	&getData(void) const;
		void				setData(std::string const &);
	private:
		std::string		string_data_;
};
#endif
