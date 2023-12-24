#include "Data.hpp"

Data::Data() : string_data_("nothing")
{
	std::cout << "Data Default Constructor" << std::endl;
	return ;
}

Data::Data(std::string const &string_data) : string_data_(string_data)
{
	std::cout << "Data Constructor" << std::endl;
	return ;
}

Data::Data(Data const &data)
{
	std::cout << "Data Copy Constructor" << std::endl;
	*this = data;
	return ;
}

Data::~Data()
{
	std::cout << "this is Data Destructor" << std::endl;
	return ;
}

Data	&Data::operator=(Data const &data)
{
	if (this != &data)
	{
		this->string_data_ = data.string_data_;
	}
	return (*this);
}


std::string	const &Data::getData(void) const
{
	return (this->string_data_);
}

void	Data::setData(std::string const & string_data)
{
	this->string_data_ = string_data;
}
