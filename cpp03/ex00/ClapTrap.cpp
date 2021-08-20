#include "ClapTrap.hpp"

// =======================
// ==== CONSTRUCTORS =====
// =======================

ClapTrap::ClapTrap( void ) // ==== Default
{
	std::cout << "Default constructor" << std::endl;
	this->_HitPoins = 10;
	this->_EnergyPoints = 10;
	this->_AttackDmg = 0;
	return ;
}

ClapTrap::ClapTrap( std::string name ) // ==== Parameter
{
	std::cout << "Parameter constructor : " << name << std::endl;
	this->_name = name;
	this->_HitPoins = 10;
	this->_EnergyPoints = 10;
	this->setAttdmg(0);
}

ClapTrap::ClapTrap( ClapTrap const & rhs ) // ==== Copy
{
	std::cout << "Copy constructor : " << rhs._name << std::endl;
	this->setName(rhs._name);
}
// =======================
// ===== DESTRUCTOR ======
// =======================

ClapTrap::~ClapTrap( void )
{
	std::cout << "Destructor called" << std::endl;
}

// =======================
// ====== SET / GET ======
// =======================

void	ClapTrap::setName(std::string name)
{
	std::cout << "setName = " << name << std::endl;
	this->_name = name;
}

std::string	ClapTrap::getName( void )
{
	return (this->_name);
}

unsigned int	ClapTrap::getAttDmg( void )
{
	return (this->_AttackDmg);
}

void		ClapTrap::setAttdmg( unsigned int dmg )
{
	this->_AttackDmg = dmg;
}

// =======================
// ======= Actions =======
// =======================

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->getName() << " attacks " << target
		<< " causing " << this->_AttackDmg << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << "ClapTrap " << this->getName() << " is attacked : -" <<
		amount << " HP !" << std::endl;
	this->_HitPoins -= amount;

}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->getName() << " = Heal Potion : " << amount << " HP";
	this->_HitPoins = amount;
	std::cout << " ... Healing done." << std::endl;
}
