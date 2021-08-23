#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
			std::string type;
	public:
			// ==== Canon ====
			Animal( void );
			Animal( std::string type );
			Animal( Animal const & rhs );
			~Animal( void );

			// === Set / Get ===
			void		setType(std::string type);
			std::string	getType()const;

			// === Method ===
			virtual void	makeSound() const ;
};

#endif