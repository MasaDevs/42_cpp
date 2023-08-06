#include <iostream>
#include <string>

enum	name_of_data {
	firstname,
	lastname,
	nickname,
	phonenumber,
	secret
};

bool is_number(const std::string& s)
{
	for(int i = 0; i < s.size(); i++)
		if(@isdigit(s[i]))

class	Contact {
	public:
		void	add(void);
	private:
		std::string data[5];
};

void	Contact::add(void)
{
	std::string name[5] = {"first name", "last name", "nickname", "phonenumber", "darkest secret"};
	std::string line;
	std::string data[5];

	for(int i = 0; i < 5; i++)
	{
		std::cout << name[i] << std::endl;
		while(std::getline(std::cin, data[i]))
		{
			if(i == phonenumber)
		
			if(!data[i].empty())
				break;
			std::cout << name[i] << std::endl;
			
		}
	}	
}

class	PhoneBook {
	public:
		PhoneBook() {index = 0;}
		void get_firstname();
		void add();
	private:
		Contact contact[8];
		int index;
};


void	PhoneBook::add()
{
	this->contact[index].add();
}
	
int main()
{
	PhoneBook tmp;

	tmp.add();
	
	return (0);
}
