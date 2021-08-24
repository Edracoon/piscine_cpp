#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void)
{
	std::cout << "===Array of 5 Dogs & 5 Cats===" << std::endl;
	const Animal*	array[10];
	for (int k = 0 ; k < 5 ; k++)
	{
		std::cout << "=== array[ " << k << " ] = Dog ===" << std::endl;
		array[k] = new Dog();
	}
	for (int k = 5 ; k < 10 ; k++)
	{
		std::cout << "=== array[ " << k << " ] = Cat ===" << std::endl;
		array[k] = new Cat();
	}
	for (int k = 0 ; k < 10 ; k++)
	{
		std::cout << "=== destructor for k=" << k << " ===" << std::endl;
		delete array[k];
	}
	std::cout << "=========================" << std::endl;


	std::cout << "==== Deep Copy Tests ====" << std::endl;
	const Animal*	a = new Cat();
	const Animal	b(*a);

	b.makeSound();
	std::cout << "=========================" << std::endl;

}
