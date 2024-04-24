
#ifndef CPP00_CPP04_FIXED_HPP
#define CPP00_CPP04_FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
  private:
	int _number;
	static const int _decimal;
  public:
	Fixed( ); // default constructor
	Fixed( const int intnbr ); // integer constructor
	Fixed( const float floatnbr ); // float constructor
	Fixed( const Fixed& copy ); // copy constructor

	bool operator>(const Fixed& other) const; // bigger operator
	bool operator<(const Fixed& other) const; // less operator
	bool operator>=(const Fixed& other) const; // bigger or equal operator
	bool operator<=(const Fixed& other) const; // less or equal operator
	bool operator==(const Fixed& other) const; // equal to operator
	bool operator!=(const Fixed& other) const; // different to operator

	Fixed& operator=( const Fixed& values ); // copy assignment operator
	Fixed operator+(const Fixed& data); // addition operator
	Fixed operator-(const Fixed& data); // subtraction operator
	Fixed operator/(const Fixed& data); // division operator
	Fixed operator*(const Fixed& data); // multiplication operator

	Fixed& operator++(); // pre-increment
	Fixed operator++(int); //post-increment
	Fixed& operator--(); // pre-decrement
	Fixed operator--(int); //post-decrement

	~Fixed( void ); // default destructor

	int getRawBits( void ) const; // get _number value
	void setRawBits( int const raw ); // change _number value
	float toFloat( void ) const; // converts _number to float and returns
	int toInt( void ) const; // converts _number to integer and returns

	static Fixed& max(Fixed& first, Fixed& second); //max function
	static const Fixed& max(const Fixed& first, const Fixed& second); //const max function
	static Fixed& min(Fixed& first, Fixed& second); //min function
	static const Fixed& min(const Fixed& first, const Fixed& second); //const min function
};

std::ostream& operator<<(std::ostream& os, const Fixed& m); //converts and prints the _numbers

#endif
