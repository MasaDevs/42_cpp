#include "Data.hpp"
#include "Serializer.hpp"

int main()
{
	Data	*data = new Data("masahito");

	uintptr_t	ptr = Serializer::serialize(data);
	Data		*des = Serializer::deserialize(ptr);
	std::cout << "before change: " << des->getData() << std::endl;
	des->setData("change my data");
	std::cout << "after change: " << des->getData() << std::endl;
	if (data == des)
		std::cout << "same !"<< std::endl;
	else
		std::cout << "wrong !"<< std::endl;
	delete data;
	std::cout << "this program ends successfully." << std::endl;
	return (0);
}
