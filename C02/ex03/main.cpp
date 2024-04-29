
#include "Point.hpp"

int main( void )
{
	Point a(0,0);
	Point b(9.5f,29.5f);
	Point c(20,0);
	Point point(9.5f,29.499999f);

	if (bsp(a, b, c, point))
		std::cout << "true";
	else
		std::cout << "false";
}

