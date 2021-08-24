#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
			std::string	ideas[100];
	public:
			Brain( void );
			Brain( std::string idea );
			Brain( Brain const & rhs );
			~Brain( void );

			void			setIdeas(std::string idea[]);
			std::string*	getIdeas( void );
};

#endif
