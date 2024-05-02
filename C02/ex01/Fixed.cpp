
#include "Fixed.hpp"

const int Fixed::_decimal = 8;

Fixed::Fixed( void )
{
	_number = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int intnbr)
{
	_number = intnbr * (1 << _decimal);
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float floatnbr)
{
	_number = floatnbr * (1 << _decimal);
	std::cout << "Float constructor called\n";
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
	std::cout << "Copy constructor called\n";
}

Fixed::~Fixed ( void )
{
	std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed& data)
{
	std::cout << "Copy Assignment Overload called\n";
	if (this != &data) {
		this->_number = data.getRawBits();
	}
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return(_number);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called\n";
	_number = raw;
}

float Fixed::toFloat( void ) const
{
	return (static_cast<float>(_number) / (1 << _decimal));
}

int Fixed::toInt( void ) const
{
	int ret;

	std::cout << "toInt member function called\n";
	ret = _number / (1 << _decimal);
	return (ret);
}

std::ostream& operator<<(std::ostream& os, const Fixed& m)
{
	return (os << m.toFloat());
}
