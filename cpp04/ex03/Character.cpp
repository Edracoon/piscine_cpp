#include "Character.hpp"

Character::Character( void )
{
	std::cout << "Character Default Constructor" << std::endl;
	for (int i = 0 ; i < 4 ; i++)
		this->Materia[i] = NULL;
}

Character::Character( std::string name ) 
{
	std::cout << "Character Parameter Constructor" << std::endl;
	this->_name = name;
	for (int i = 0 ; i < 4 ; i++)
		this->Materia[i] = NULL;
}

Character::Character( Character const & rhs )
{
	std::cout << "Character Copy Constructor" << std::endl;
	this->_name = rhs.getName();
	for (int i = 0 ; i < 4 ; i++)
		this->Materia[i] = rhs.getMateria(i);
}

Character::~Character( void )
{
	std::cout << "Character Destructor" << std::endl;
}

std::string const &	Character::getName() const {
	return (this->_name);
}

AMateria*	const & Character::getMateria(int i) const {
	return(this->Materia[i]); 
}

void				Character::equip(AMateria* m) 
{
	(void)m;
}

void				Character::unequip(int idx)
{
	(void)idx;
}

void				Character::use(int idx, ICharacter& target)
{
	(void)idx;
	(void)target;
}