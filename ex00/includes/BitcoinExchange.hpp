#ifndef	BITCOINEXCHANGE_HPP	
#define BITCOINEXCHANGE_HPP	
#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include <fstream>

class	BitcoinExchange	
{
	public:
		BitcoinExchange(std::string const &file_name);
		BitcoinExchange(BitcoinExchange const &btc);
		~BitcoinExchange();
		BitcoinExchange &operator=(BitcoinExchange const &btc);
		void	insertData(std::string const &date, double data);
		double	searchData(std::string const &date);
		void	printData(void) const;
		static bool	checkDateFormat(std::string const &);
		static bool	isValidDay(int year, int month, int day);
		template <typename T>
		static void	stringConverter(std::string const &str, T &num) {
			std::stringstream ss;
			ss << str;
			ss >> num;
		}
	private:
		std::map<std::string, double> database;
};

#endif
