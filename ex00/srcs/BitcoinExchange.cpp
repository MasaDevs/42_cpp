#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string const &file_name) {
	std::ifstream	ifs(file_name.c_str());
	std::string		line;

	if (!ifs) {
		throw std::runtime_error("database: constructor: Could'nt open the data file.");
		return ;
	}

	std::getline(ifs, line);
	while(std::getline(ifs, line)) {
		if (line.find(",") == std::string::npos) {
			throw std::runtime_error("database: constructor this format is not csv data !");
			continue ;
		}
		try {
			std::string	date = line.substr(0, line.find(","));
			std::stringstream ss;
			double	data;
			ss << line.substr(line.find(",") + 1);
			ss >> data;
			this->insertData(date, data);
		}
		catch (std::invalid_argument &e) {
			throw std::runtime_error("database: constructor: the data is invalid. " + std::string(e.what()));
		}
	}
	ifs.close();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &btc) {
	*this = btc;
}

BitcoinExchange	&BitcoinExchange::operator=(BitcoinExchange const &btc) {
	if (this != &btc) {
		this->database = btc.database;
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange(){}
void	BitcoinExchange::insertData(std::string const &date, double data) {
	if (!this->checkDateFormat(date))
		throw std::invalid_argument("database: insert: ivalid date format: date is not feasible.");
	else if (!this->database.empty() && this->database.find(date) != this->database.end())
		throw std::invalid_argument("database: insert: ivalid data format: duplicate date.");
	this->database.insert(std::make_pair(date, data));
}
	
double	BitcoinExchange::searchData(std::string const &date) {
	if (!database.size())
		throw std::runtime_error("database: searchData: BitcoinExchange doesn't have any data. ");
		
	std::map<std::string, double>::iterator iter = this->database.lower_bound(date);
	if (date < database.begin()->first)
		throw std::invalid_argument("database: search: too old date !");
	return (iter->first == date ? iter->second : (--iter)->second);
}

void	BitcoinExchange::printData(void) const {
	for (std::map<std::string, double>::const_iterator iter = this->database.begin(); iter != database.end(); iter++)
		std::cout << "date: " << iter->first  << " data: " << iter->second << std::endl;
}

bool	BitcoinExchange::checkDateFormat(std::string const &date) {
	if (date.size() != 10 || date[4] != '-' || date[7] != '-')
		return (false);

	int year, month, day;
	stringConverter(date.substr(0, 4), year);	
	stringConverter(date.substr(5, 2), month);	
	stringConverter(date.substr(8, 2), day);	
	return (isValidDay(year, month, day));
}

bool	BitcoinExchange::isValidDay(int year, int month, int day) {
	switch(month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return (1 <= day && day <= 31 ? true : false);
		case 4:
		case 6:
		case 9:
		case 11:
			return (1 <= day && day<= 30 ? true : false);
		case 2:
			if ((year % 400 == 0) || (year % 4 == 0 && year % 100) )
				return (1 <= day && day <= 29 ? true : false);
			return (1 <= day && day <= 28 ? true : false);
		default :
			return (false);
	}
}

template <typename T>
void	BitcoinExchange::stringConverter(std::string const &str, T &num) {

	std::stringstream ss;
	ss << str;
	ss >> num;
}
