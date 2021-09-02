#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template< typename T >
void	iter(T* arrayptr, unsigned int length, T (f)(T))
{
	for(unsigned int i = 0 ; i < length ; i++)
	{
		(f)(*arrayptr[i]);
	}
}

#endif