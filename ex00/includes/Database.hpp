#ifndef	DATABASE_HPP
#define	DATABASE_HPP
#include "DateFormat.hpp"
#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <climits>

class	Database
{
	public:
		Database(std::string file_name);
		bool	insertData(std::string date, double data);
		double	searchData(std::string date);
		void	printData(void);
	private:
		std::map<std::string, double> database;
};

#endif
