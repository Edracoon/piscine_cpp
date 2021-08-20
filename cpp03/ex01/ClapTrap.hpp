#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
			std::string		_name;
			unsigned int	_HitPoins;
			unsigned int	_EnergyPoints;
			unsigned int	_AttackDmg;
	public:
			// === Constructor / Destructor ===
			ClapTrap( void );
			ClapTrap( std::string name );
			ClapTrap( ClapTrap const & rhs);
			~ClapTrap( void );

			// ==== Operators ====
			ClapTrap&	operator=( ClapTrap const & rhs);

			// ==== Set / Get =====
			std::string		getName( void );
			void			setName(std::string name);
			unsigned int	getAttDmg( void );
			void			setAttdmg( unsigned int dmg );

			// ==== Actions ====
			void	attack(std::string const & target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);
};

std::ostream	operator<<(std::ostream& ofs, ClapTrap const & rhs);

#endif