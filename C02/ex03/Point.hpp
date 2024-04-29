
#ifndef CPP00_CPP04_POINT_HPP
#define CPP00_CPP04_POINT_HPP

#include "Fixed.hpp"

class Point {
  private:
	const Fixed x;
	const Fixed y;
  public:
	Point();
	Point( const Fixed& x, const Fixed& y );
	Point( const Point& copy );
	Point& operator=(Point& values );
	~Point();
	Fixed getX( void ) const;
	Fixed getY( void ) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
float area(float x1, float y1, float x2, float y2, float x3, float y3);

#endif
