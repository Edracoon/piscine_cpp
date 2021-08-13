#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string _name)
{
	setName(_name);
}

Zombie::~Zombie()
{
	std::cout << "Destructor: " << getName() << std::endl;
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
