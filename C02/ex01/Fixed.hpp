
#ifndef CPP00_CPP04_FIXED_HPP
#define CPP00_CPP04_FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
  private:
	int _number;
	static const int _decimal;
  public:
	Fixed( );
	Fixed( const int intnbr );
	Fixed( const float floatnbr );
	Fixed( const Fixed& copy );
	Fixed& operator=( const Fixed& values );
	~Fixed( void );
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& m);

#endif
