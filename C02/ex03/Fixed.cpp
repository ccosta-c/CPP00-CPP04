
#include "Fixed.hpp"

const int Fixed::_decimal = 8;

Fixed::Fixed( void )
{
	_number = 0;
	//std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int intnbr)
{
	_number = intnbr * (1 << _decimal);
	//std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float floatnbr)
{
	_number = floatnbr * (1 << _decimal);
	//std::cout << "Float constructor called\n";
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
	//std::cout << "Copy constructor called\n";
}

Fixed::~Fixed ( void )
{
	//std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed& data)
{
	if (this != &data)
		this->_number = data.getRawBits();
	//std::cout << "Copy Assignment Overload called\n";
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	return(_number);
}

void Fixed::setRawBits( int const raw )
{
	_number = raw;
}

float Fixed::toFloat( void ) const
{
	return (static_cast<float>(_number) / (1 << _decimal));
}

int Fixed::toInt( void ) const
{
	int ret;

	ret = _number / (1 << _decimal);
	return (ret);
}

std::ostream& operator<<(std::ostream& os, const Fixed& m)
{
	return (os << m.toFloat());
}

bool Fixed::operator>(const Fixed& other) const
{
	if (this->toFloat() > other.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator<(const Fixed& other) const
{
	if (this->toFloat() < other.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator>=(const Fixed& other) const
{
	if (this->toFloat() >= other.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator<=(const Fixed& other) const
{
	if (this->toFloat() <= other.toFloat())
		return (true);
	else
		return (false);
}
bool Fixed::operator==(const Fixed& other) const
{
	if (this->toFloat() == other.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator!=(const Fixed& other) const
{
	if (this->toFloat() != other.toFloat())
		return (true);
	else
		return (false);
}

Fixed Fixed::operator+(const Fixed& data)
{
	return (this->toFloat() + data.toFloat());
}

Fixed Fixed::operator-(const Fixed& data)
{
	return (this->toFloat() - data.toFloat());
}

Fixed Fixed::operator/(const Fixed& data)
{
	return (this->toFloat() / data.toFloat());
}

Fixed Fixed::operator*(const Fixed& data)
{
	return (this->toFloat() * data.toFloat());
}

Fixed& Fixed::operator++( void )
{
	this->_number += 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->_number += 1;
	return (tmp);
}

Fixed& Fixed::operator--( void )
{
	this->_number -=1;
	return (*this);
}

Fixed Fixed::operator--( int )
{
	Fixed tmp = *this;
	this->_number -= 1;
	return (tmp);
}

Fixed& Fixed::max(Fixed& first, Fixed& second)
{
	if(first.toFloat() > second.toFloat())
		return (first);
	else
		return (second);
}

const Fixed& Fixed::max(const Fixed& first, const Fixed& second)
{
	if(first.toFloat() > second.toFloat())
		return (first);
	else
		return (second);
}

Fixed& Fixed::min(Fixed& first, Fixed& second)
{
	if(first.toFloat() < second.toFloat())
		return (first);
	else
		return (second);
}

const Fixed& Fixed::min(const Fixed& first, const Fixed& second)
{
	if(first.toFloat() < second.toFloat())
		return (first);
	else
		return (second);
}
