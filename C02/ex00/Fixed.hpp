
#ifndef CPP00_CPP04_FIXED_HPP
#define CPP00_CPP04_FIXED_HPP

#include <iostream>

class Fixed {
  private:
	int _number;
	static const int _decimal;
  public:
	Fixed();
	Fixed(Fixed& copy);
	Fixed& operator=(const Fixed& values);
	~Fixed( void );
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};


#endif
