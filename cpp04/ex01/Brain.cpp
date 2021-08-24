#include "Brain.hpp"

// === Constructors ===

Brain::Brain( void )
{
	std::cout << "Default Brain Constructor" << std::endl;
}

Brain::Brain( std::string idea )
{
	std::cout << "Parameter Brain Constructor" << std::endl;
	this->ideas[0] = idea;
}

Brain::Brain( Brain const & rhs )
{
	std::cout << "Copy Brain Constructor" << std::endl;
	*this = rhs;
}

Brain::~Brain( void )
{
	std::cout << "Destructor Brain" << std::endl;
}

// === Set / Get ===

void			Brain::setIdeas(std::string idea[])
{
	for (int i = 0 ; i < 100 ; i++)
		this->ideas[i].assign(idea[i]);
}

std::string*	Brain::getIdeas( void ) {
	return (this->ideas);
}