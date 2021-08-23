#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* Ani		= new Animal("Kevin");
	const Animal* Doggo 	= new Dog("Florent");
	const Animal* Catti		= new Cat("Micka");

	std::cout << Ani->getType() << " " << std::endl;
	std::cout << Doggo->getType() << " " << std::endl;
	std::cout << Catti->getType() << " " << std::endl;

	Catti->makeSound(); 	// Cat sound
	Doggo->makeSound(); 	// Dog sound
	Ani->makeSound();		// Animal Sound

	std::cout << "====== Wrong Test =====" << std::endl;
	const WrongAnimal* wAni	= new WrongAnimal();
	const WrongAnimal* wCat	= new WrongCat();

	wAni->makeSound(); // Wrong Animal Sound;
	wCat->makeSound(); // Wrong Cat Sound -> Animal Sound;
}
