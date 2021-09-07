#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template< typename T >
class Mutantstack : public std::stack<T>
{
	private:
	public:
			Mutantstack( void ) { return (std::stack<T>()); }
			Mutantstack( Mutantstack const & rhs ) { return (std::stack<T>(rhs)); }

			begin( this->c.begin() );
};

#endif