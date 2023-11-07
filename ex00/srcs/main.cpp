#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>
#include <string>
int main()
{
	{
		const Animal *animal = new Animal();
		animal->makeSound();
		std::cout << animal->getType() << std::endl;
		delete animal;
	}
	{
		const Animal *cat = new Cat();
		cat->makeSound();
		std::cout << cat->getType() << std::endl;
		delete cat;
	}
	{
		const Animal *dog = new Dog();
		dog->makeSound();
		std::cout << dog->getType() << std::endl;
		delete dog;
	}
	
}
