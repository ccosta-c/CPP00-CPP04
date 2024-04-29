
#include "Point.hpp"

Point::Point(void) : x(0),y(0)
{
}

Point::Point( const Fixed& hor, const Fixed& vert ) : x(hor),y(vert)
{
}

Point::Point( const Point& copy ) : x(copy.x), y(copy.y)
{
}

Point& Point::operator=(Point& values )
{
	if (this == &values)
		return (*this);
	(Fixed) this->x = values.getX();
	(Fixed) this->y = values.getY();
	return (*this);
}

Point::~Point( void )
{
}

Fixed Point::getX( void ) const
{
	return(x);
}

Fixed Point::getY( void ) const
{
	return(y);
}
