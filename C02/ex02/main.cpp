
#include "Fixed.hpp"

//int main( void )
//{
//		Fixed a;
//		Fixed b(4);
//		Fixed c(45.767f);
//		Fixed d(c);
//
//	std::cout << "Default Constructor: a = "<< a << std::endl;
//	std::cout << "Integer Constructor: b = "<< b << std::endl;
//	std::cout << "Float Constructor: c = "<< c << std::endl;
//	a = b;
//	std::cout << "Copy assignment operator (a = b): a = " << a << std::endl;
//	std::cout << "Copy constructor: d = " << d << std::endl;
//	std::cout << "Bigger than operator " << "(" << a << " > " << c << "): " << (a > c) << std::endl;
//	std::cout << "Bigger or equal to operator " << "(" << a << " >= " << b << "): " << (a >= b) << std::endl;
//	std::cout << "Smaller than operator " << "(" << a << " < " << c << "): " << (a < c) << std::endl;
//	std::cout << "Smaller or equal to operator " << "(" << a << " <= " << b << "): " << (a <= b) << std::endl;
//	std::cout << "Equal to operator " << "(" << a << " = " << c << "): " << (a == c) << std::endl;
//	std::cout << "Different than operator " << "(" << a << " != " << c << "): " << (a != c) << std::endl;
//	std::cout << "sum pre-increment, value before " << a << "\nvalue after " << ++a << std::endl;
//	std::cout << "sum post-increment, value before " << a << "\nvalue after " << a++ << "\naccess to the value " << a << std::endl;
//	std::cout << "sub pre-increment, value before " << a << "\nvalue after " << --a << std::endl;
//	std::cout << "sub post-increment, value before " << a << "\nvalue after " << a-- << "\naccess to the value " << a << std::endl;
//	std::cout << "finding the min b=" << b << " c=" << c << " result = " << Fixed::min(b,c) << std::endl;
//	std::cout << "finding the max b=" << b << " c=" << c << " result = " << Fixed::max(b,c) << std::endl;
//}

//#include <bitset>
//std::cout<<std::bitset<8>(a.getRawBits())<<std::endl; the way to visualize the binary form of the number;

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
