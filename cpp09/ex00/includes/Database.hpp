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
		bool	insertData(std::string date, long long data);
		void	printData(void);
	private:
		bool	checkDateFormat(std::string);
		bool	isValidDay(struct tm result);
		std::map<std::string, int> database;
};

#endif
