#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>
#include <string>
#define AAnimal_LEN 5
int main()
{
	/*
	const AAnimal* meta = new AAnimal();
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	std::cout << "meta was deleted" << std::endl;
	delete j;
	std::cout << "dog was deleted" << std::endl;
	delete i;
	std::cout << "cat was deleted" << std::endl;
	*/
	
	/*TEST*/
	
	AAnimal	*zoo[AAnimal_LEN];

	for(int i = 0; i < AAnimal_LEN; i++)
	{
		if(i < AAnimal_LEN / 2)
			zoo[i] = new Dog();
		else
			zoo[i] = new Cat();
	}
	for(int i = 0; i < AAnimal_LEN; i++)
		delete zoo[i];
	return 0;
}
