#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
			IMateriaSource( void );
			IMateriaSource(  );
			IMateriaSource();
			~IMateriaSource();
			virtual void learnMateria( AMateria* );
			virtual AMateria* createMateria( std::string const & type );
};

#endif