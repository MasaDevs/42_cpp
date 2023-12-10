#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>
#include <string>
#define ANIMAL_LEN 10
int main()
{
	{	
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete meta;
		std::cout << "meta was deleted" << std::endl;
		delete j;
		std::cout << "dog was deleted" << std::endl;
		delete i;
		std::cout << "cat was deleted" << std::endl;
	}
	
	{
		/*TEST*/
		
		Animal	*zoo[ANIMAL_LEN];

		for(int i = 0; i < ANIMAL_LEN; i++)
		{
			if(i < ANIMAL_LEN / 2)
				zoo[i] = new Dog();
			else
				zoo[i] = new Cat();
			std::cout << zoo[i]->getType() << std::endl;
			zoo[i]->makeSound();
			delete zoo[i];
		}
	}

	{
		Dog	dog1;
		Dog	dog2(dog1);

		dog1.makeSound();
		dog2.makeSound();
		std::cout << dog1.getType() << std::endl;
		std::cout << dog2.getType() << std::endl;
	}
	return 0;
}
