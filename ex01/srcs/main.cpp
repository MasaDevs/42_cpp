#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>
#include <string>
#define ANIMAL_LEN 5
int main()
{
	/*
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
	*/
	
	/*TEST*/
	
	Animal	*zoo[ANIMAL_LEN];

	for(int i = 0; i < ANIMAL_LEN; i++)
	{
		if(i < ANIMAL_LEN / 2)
			zoo[i] = new Dog();
		else
			zoo[i] = new Cat();
	}
	for(int i = 0; i < ANIMAL_LEN; i++)
		delete zoo[i];
	return 0;
}
