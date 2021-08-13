#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string _name)
{
	setName(_name);
	std::cout << "Zombie " << _name << " were created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << getName() << " were killed" << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

std::string Zombie::getName()
{
	return(this->_name);
}

void	Zombie::announce()
{
	std::cout << "<" << getName() << ">" << " BraiiiiiiinnnzzzZ" << std::endl;
}
