#include "Dog.hpp"

// ==== Constructors ====
Dog::Dog( void )
{
	std::cout << "Default Dog Constructor" << std::endl;
	this->brain = new Brain();
}

Dog::Dog( std::string type )
{
	std::cout << "Parameter Dog Constructor" << std::endl;
	this->setType(type);
	this->brain = new Brain();
}

Dog::Dog( Dog const & rhs )
{
	std::cout << "Copy Dog Constructor" << std::endl;
	this->brain = new Brain();
	this->brain = rhs.brain;
}

Dog::~Dog( void )
{
	delete this->brain;
	std::cout << "Destructor Dog" << std::endl;
}

// === Method ===
void	Dog::makeSound( void ) const 
{
	std::cout << "The Dog is barking" << std::endl;
}

// === set / get === 
void		Dog::setType(std::string type) {
	this->type = type;
}

std::string	Dog::getType() const {
	return (this->type);
}