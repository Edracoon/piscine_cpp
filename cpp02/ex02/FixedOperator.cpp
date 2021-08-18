#include "Fixed.hpp"

std::ostream&	operator<<(std::ostream& ifs, Fixed const & rhs )
{
	std::cout << rhs.toFloat();
	return (ifs);
}

Fixed&	Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	this->_pf = rhs.getRawBits();
	return (*this);
}

inline bool operator>(const Fixed& lhs, const Fixed& rhs)
{
	return (rhs > lhs);
}

inline bool operator<(const Fixed& lhs, const Fixed& rhs)
{
	return (rhs < lhs);
}

inline bool operator>=(const Fixed& lhs, const Fixed& rhs)
{
	return !(lhs < rhs);
}

inline bool operator<=(const Fixed& lhs, const Fixed& rhs)
{
	return !(lhs > rhs);
}

Fixed&	Fixed::operator==( Fixed const & rhs )
{

}


Fixed&	Fixed::operator+( Fixed const & rhs )
{

}

Fixed&	Fixed::operator-( Fixed const & rhs )
{

}

Fixed&	Fixed::operator*( Fixed const & rhs )
{

}

Fixed&	Fixed::operator/( Fixed const & rhs )
{

}