#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	std::cout << "MateriaSource Default Constructor" << std::endl;
	for (int i = 0 ; i < 4 ; i++)
		source[i] = NULL;
	this->idx = 0;
}

MateriaSource::MateriaSource( MateriaSource const & rhs)
{
	std::cout << "MateriaSource Copy Constructor" << std::endl;
	*this = rhs;
}

MateriaSource::~MateriaSource( void )
{
	std::cout << "MateriaSource Destructor" << std::endl;
	for (int i = 0 ; i < 4 ; i++)
		delete source[i];
}

void	MateriaSource::learnMateria( AMateria* learned)
{
	std::cout << "learnMateria" << std::endl;
	if (this->idx < 4)
	{
		this->source[this->idx] = learned;
		this->tab[this->idx] = learned->getType();
		this->idx += 1;
	}
}

AMateria*	MateriaSource::createMateria( std::string const & type )
{
	for (int i = 0 ; i < 4 ; i++)
	{
		if (this->tab[i] == type)
		{
			std::cout << "createMateria i = " << i << " type = "<< this->source[i]->getType() << std::endl;
			return (this->source[i]);
		}
	}
	return (0);
}

MateriaSource&	MateriaSource::operator=(MateriaSource const & rhs)
{
	for (int i = 0 ; i < 4 ; i++)
		this->source[i] = rhs.source[i];
	return (*this);
}
