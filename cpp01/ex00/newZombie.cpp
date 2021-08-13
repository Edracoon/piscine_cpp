#include <iostream>
#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie zomb(name);
	zomb.announce();
	// return (&zomb);
}