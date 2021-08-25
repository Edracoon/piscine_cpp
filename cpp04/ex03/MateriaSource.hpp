#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
			MateriaSource( void );
			MateriaSource( MateriaSource const & rhs);
			~MateriaSource( void ) {};
			virtual void learnMateria( AMateria* );
			virtual AMateria* createMateria( std::string const & type );
};

#endif
