#include <iostream>
#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie *zomb = new Zombie(name);
	zomb->announce();
	return (zomb);
}