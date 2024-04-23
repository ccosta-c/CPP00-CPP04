
#include "Fixed.hpp"

const int Fixed::_decimal = 8;

Fixed::Fixed( void )
{
	_number = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed &copy)
{
	*this = copy;
	std::cout << "Copy constructor called\n";
}

Fixed::~Fixed ( void )
{
	std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed &data)
{
	if (this != &data)
		this->_number = data.getRawBits();
	std::cout << "Copy Assignment Overload called\n";
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return(_number);
}

void Fixed::setRawBits( int const raw )
{
	_number = raw;
	std::cout << "setRawBits member function called\n";
}
