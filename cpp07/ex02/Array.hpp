#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template< typename T >
class Array
{
	private:
			unsigned int	_size;
			T				*_array;
	public:
			Array<T>( void )
			{
				this->_array = NULL;
				_size = 0;
			}

			Array( Array<T> const & rhs )
			{
				*this = rhs;
			}

			Array( unsigned int n )
			{
				std::cout << "Parameter constructor" << std::endl;
				_array = new T[n];
				_size = n;
			}

			~Array<T>( void ) { delete [] _array; }

			unsigned int	size() const {
				return (_size);
			}

			class OOLE	: public std::exception
			{
				public:
					virtual const char* what() const throw( ) { return ("Exception: Out of the Limits"); }
			};

			T&			operator[]( int i )
			{
				if (i < (int)_size)
					return (_array[i]);
				throw OOLE();
			}

			Array<T>&	operator=( Array<T> const & rhs )
			{
				this->_size = rhs._size;
				this->_array = new T[_size];
				for (int i = 0 ; i < (int)_size ; i++)
					this->_array[i] = rhs._array[i];
				return (*this);
			}
};

#endif