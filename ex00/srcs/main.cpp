#include "Animal.hpp"
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
	{
		Animal animal1("animal");
		Animal animal2(animal1);
		Animal animal3 = animal1;
		
		animal1.makeSound(); 
		animal2.makeSound(); 
		animal3.makeSound(); 
		std::cout << animal1.getType() << std::endl;
		std::cout << animal2.getType() << std::endl;
		std::cout << animal3.getType() << std::endl;
	}
	{
		Dog dog1;
		Dog dog2(dog1);
		Dog dog3 = dog1;
		
		dog1.makeSound(); 
		dog2.makeSound(); 
		dog3.makeSound(); 
		std::cout << dog1.getType() << std::endl;
		std::cout << dog2.getType() << std::endl;
		std::cout << dog3.getType() << std::endl;
	}
	{
		Cat cat1;
		Cat cat2(cat1);
		Cat cat3 = cat1;
		
		cat1.makeSound(); 
		cat2.makeSound(); 
		cat3.makeSound(); 
		std::cout << cat1.getType() << std::endl;
		std::cout << cat2.getType() << std::endl;
		std::cout << cat3.getType() << std::endl;
	}
	
}
