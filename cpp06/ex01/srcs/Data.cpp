#include "Data.hpp"

Data::Data() : data("nothing")
{
	std::cout << "this is Data Constructor" << std::endl;
	return ;
}

Data::Data(std::string data) : data(data)
{
	std::cout << "this is Data Constructor" << std::endl;
	return ;
}

Data::~Data()
{
	std::cout << "this is Data Destructor" << std::endl;
	return ;
}
std::string	Data::getData(void)
{
	return (this->data);
}

void	Data::setData(std::string data)
{
	this->data = data;
}
