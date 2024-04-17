
#ifndef CPP00_CPP04_FIXED_HPP
#define CPP00_CPP04_FIXED_HPP


class Fixed {
  private:
	int number;
	static const int fraction;
  public:
	Fixed();
	Fixed(Fixed& copy);
	~Fixed();
	Fixed& operator=(const Fixed& values);

};


#endif
