#include <iostream>
#include "Zombie.hpp"

Zombie* 	newZombie(std::string name);

int	main(void)
{
	Zombie Florent = Zombie("Florent");
	Zombie *Kevin = new Zombie("Kevin");
	Florent.announce();

	Zombie *Micka = newZombie("Micka");
	delete Kevin;
	delete Micka;
	return (0);
}