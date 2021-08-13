#include <iostream>
#include "Zombie.hpp"

Zombie* 	newZombie(std::string name);

int	main(void)
{
	Zombie zomb("Florent");
	zomb.announce();
	newZombie("Micka");
}