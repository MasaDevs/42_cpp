#ifndef	DATABASE_HPP
#define	DATABASE_HPP
#include <iostream>
#include <string>
#include <map>
#include <fstream>

class	Database
{
	public:
		Database(std::string file_name);
		bool	insertData(std::string date, float data);
		float	searchData(std::string date);
		void	printData(void);
	private:
		std::map<std::string, float> database;
};

#endif
